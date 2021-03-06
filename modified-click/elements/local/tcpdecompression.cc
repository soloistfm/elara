#include <click/config.h>
#include "tcpdecompression.hh"
//#include <clicknet/tcp.h>
CLICK_DECLS

TcpDecompression::TcpDecompression()
{
};

TcpDecompression::~TcpDecompression()
{
};

void
TcpDecompression::push(int, Packet *p_in)
{

  WritablePacket* p_out = p_in->uniqueify();

  uint8_t* start = (uint8_t*) p_out->tcp_header()+20;
  uint16_t comp_size = p_out->length()-p_out->transport_header_offset()-20;
  uint16_t uncomp_size = MAX_PACKET_SIZE;

  //struct click_tcp* tcp = (struct click_tcp*) p_out->tcp_header();

  if (ZlibDecompression (start, buf, comp_size, uncomp_size))
    {
      if (uncomp_size > comp_size)
        p_out = p_out->put(uncomp_size - comp_size);
      else
        p_out->take(comp_size - uncomp_size);

      memcpy((uint8_t*) p_out->tcp_header()+20, buf, uncomp_size);

      // Update the ip_len parameter of the ip header
      if (p_out->has_network_header())
	{
	  struct click_ip* ip = (struct click_ip*) p_out->ip_header();
	  ip->ip_len = htons(uncomp_size+40);
	}
      output(0).push(p_out);
    }
  else output(1).push(p_out);
}

bool
TcpDecompression::ZlibDecompression (uint8_t *srcData, uint8_t *destData, uint16_t srcSize, uint16_t &destSize)
{
  z_stream strm;
  strm.zalloc = 0;
  strm.zfree = 0;
  strm.next_in = srcData;
  strm.avail_in = srcSize;
  strm.next_out = destData;
  strm.avail_out = destSize;

  inflateInit(&strm);

  int inflate_res = inflate(&strm, Z_FINISH);
  if (inflate_res != Z_STREAM_END)
    {
      inflateEnd(&strm);
      return false;
    }

  destSize = strm.total_out;

  inflateEnd(&strm);

  return true;
}

CLICK_ENDDECLS
EXPORT_ELEMENT(TcpDecompression)
ELEMENT_LIBS(-L/usr/local/lib -lz)
ELEMENT_MT_SAFE(TcpDecompression)
