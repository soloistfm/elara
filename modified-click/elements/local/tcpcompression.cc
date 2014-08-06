#include <click/config.h>
#include "tcpcompression.hh"
#include <clicknet/tcp.h>
CLICK_DECLS

TcpCompression::TcpCompression()
{
};

TcpCompression::~TcpCompression()
{
};

void
TcpCompression::push(int, Packet *p_in)
{

  WritablePacket* p_out = p_in->uniqueify();

  // Packet lacks a function to directly access data so we use
  // transport_header()+20 so this will not work if the TCP header is larger than 20 bytes
  uint8_t* start = (uint8_t*) p_out->transport_header()+20;
  uint16_t uncomp_size = p_out->length()-p_out->transport_header_offset()-20;
  uint16_t comp_size = MAX_PACKET_SIZE;

  struct click_tcp* tcp = (struct click_tcp*) p_out->transport_header();

  // Only tcp traffic for port 9877 will be compressed
  if (ntohs(tcp->th_dport) == 9877 && ZlibCompression (start, m_buf, uncomp_size, comp_size))
    {
      if (uncomp_size > comp_size)
        p_out->take(uncomp_size - comp_size);
      else
        p_out = p_out->put(comp_size - uncomp_size);

      memcpy((uint8_t*) p_out->transport_header()+20, m_buf, comp_size);

      // Update the ip_len parameter of the ip header
      struct click_ip* ip = (struct click_ip*) p_out->ip_header();
      ip->ip_len = htons(comp_size+40);

      output(0).push(p_out);
    }
  else output(1).push(p_out);
}

bool
TcpCompression::ZlibCompression (uint8_t *srcData, uint8_t *destData, uint16_t srcSize, uint16_t &destSize)
{  
  z_stream strm;
  strm.zalloc = 0;
  strm.zfree = 0;
  strm.next_in = srcData;
  strm.avail_in = srcSize;
  strm.next_out = destData;
  strm.avail_out = destSize;
  
  deflateInit(&strm, Z_BEST_COMPRESSION);
  
  while (strm.avail_in != 0) 
    {
      int res = deflate(&strm, Z_NO_FLUSH);
      if (res != Z_OK)
	{
	  deflateEnd(&strm);
	  return false;
	}
    }
  
  int deflate_res = Z_OK;
  while (deflate_res == Z_OK)
    {
      deflate_res = deflate(&strm, Z_FINISH);
    }
  if (deflate_res != Z_STREAM_END)
    {
      deflateEnd(&strm);
      return false;
    }
  
  destSize = strm.total_out;
  deflateEnd(&strm);

  return true;
}

CLICK_ENDDECLS
EXPORT_ELEMENT(TcpCompression)
ELEMENT_LIBS(-L/usr/local/lib -lz)
ELEMENT_MT_SAFE(TcpCompression)
