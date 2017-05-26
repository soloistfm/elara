/*
 * Automatically generated C config: don't edit
 * Linux kernel version: 2.6.9
 * Wed Dec 15 15:40:05 2004
 */
#define AUTOCONF_INCLUDED
#define CONFIG_X86 1
#define CONFIG_MMU 1
#define CONFIG_UID16 1
#define CONFIG_GENERIC_ISA_DMA 1
#define CONFIG_GENERIC_IOMAP 1

/*
 * Code maturity level options
 */
#define CONFIG_EXPERIMENTAL 1
#define CONFIG_CLEAN_COMPILE 1

/*
 * General setup
 */
#define CONFIG_LOCALVERSION ""
#define CONFIG_SWAP 1
#define CONFIG_SYSVIPC 1
#define CONFIG_POSIX_MQUEUE 1
#undef CONFIG_BSD_PROCESS_ACCT
#define CONFIG_SYSCTL 1
#define CONFIG_AUDIT 1
#define CONFIG_AUDITSYSCALL 1
#define CONFIG_LOG_BUF_SHIFT 15
#define CONFIG_HOTPLUG 1
#undef CONFIG_IKCONFIG
#undef CONFIG_EMBEDDED
#define CONFIG_KALLSYMS 1
#undef CONFIG_KALLSYMS_EXTRA_PASS
#define CONFIG_FUTEX 1
#define CONFIG_EPOLL 1
#define CONFIG_IOSCHED_NOOP 1
#define CONFIG_IOSCHED_AS 1
#define CONFIG_IOSCHED_DEADLINE 1
#define CONFIG_IOSCHED_CFQ 1
#undef CONFIG_CC_OPTIMIZE_FOR_SIZE
#define CONFIG_SHMEM 1
#undef CONFIG_TINY_SHMEM

/*
 * Loadable module support
 */
#define CONFIG_MODULES 1
#undef CONFIG_MODULE_UNLOAD
#define CONFIG_OBSOLETE_MODPARM 1
#undef CONFIG_MODVERSIONS
#define CONFIG_KMOD 1

/*
 * Processor type and features
 */
#define CONFIG_X86_PC 1
#undef CONFIG_X86_ELAN
#undef CONFIG_X86_VOYAGER
#undef CONFIG_X86_NUMAQ
#undef CONFIG_X86_SUMMIT
#undef CONFIG_X86_BIGSMP
#undef CONFIG_X86_VISWS
#undef CONFIG_X86_GENERICARCH
#undef CONFIG_X86_ES7000
#undef CONFIG_M386
#undef CONFIG_M486
#undef CONFIG_M586
#undef CONFIG_M586TSC
#undef CONFIG_M586MMX
#undef CONFIG_M686
#undef CONFIG_MPENTIUMII
#undef CONFIG_MPENTIUMIII
#undef CONFIG_MPENTIUMM
#define CONFIG_MPENTIUM4 1
#undef CONFIG_MK6
#undef CONFIG_MK7
#undef CONFIG_MK8
#undef CONFIG_MCRUSOE
#undef CONFIG_MWINCHIPC6
#undef CONFIG_MWINCHIP2
#undef CONFIG_MWINCHIP3D
#undef CONFIG_MCYRIXIII
#undef CONFIG_MVIAC3_2
#undef CONFIG_X86_GENERIC
#define CONFIG_X86_CMPXCHG 1
#define CONFIG_X86_XADD 1
#define CONFIG_X86_L1_CACHE_SHIFT 7
#define CONFIG_RWSEM_XCHGADD_ALGORITHM 1
#undef CONFIG_X86_WP_WORKS_OK
#define CONFIG_X86_INVLPG 1
#define CONFIG_X86_BSWAP 1
#define CONFIG_X86_POPAD_OK 1
#define CONFIG_X86_GOOD_APIC 1
#define CONFIG_X86_INTEL_USERCOPY 1
#define CONFIG_X86_USE_PPRO_CHECKSUM 1
#undef CONFIG_HPET_TIMER
#undef CONFIG_SMP
#define CONFIG_NR_CPUS 8
#define CONFIG_SCHED_SMT 1
#undef CONFIG_PREEMPT
#define CONFIG_X86_LOCAL_APIC 1
#define CONFIG_X86_IO_APIC 1
#define CONFIG_X86_TSC 1
#define CONFIG_X86_MCE 1
#define CONFIG_X86_MCE_NONFATAL 1
#define CONFIG_X86_MCE_P4THERMAL 1
#undef CONFIG_TOSHIBA
#undef CONFIG_I8K
#undef CONFIG_MICROCODE
#undef CONFIG_X86_MSR
#undef CONFIG_X86_CPUID

/*
 * Firmware Drivers
 */
#undef CONFIG_EDD
#define CONFIG_NOHIGHMEM 1
#undef CONFIG_HIGHMEM4G
#undef CONFIG_HIGHMEM64G
#undef CONFIG_MATH_EMULATION
#define CONFIG_MTRR 1
#undef CONFIG_EFI
#define CONFIG_IRQBALANCE 1
#define CONFIG_HAVE_DEC_LOCK 1
#undef CONFIG_REGPARM

/*
 * Power management options (ACPI, APM)
 */
#define CONFIG_PM 1
#undef CONFIG_PM_DEBUG
#define CONFIG_SOFTWARE_SUSPEND 1
#define CONFIG_PM_STD_PARTITION ""

/*
 * ACPI (Advanced Configuration and Power Interface) Support
 */
#define CONFIG_ACPI 1
#define CONFIG_ACPI_BOOT 1
#define CONFIG_ACPI_INTERPRETER 1
#define CONFIG_ACPI_SLEEP 1
#define CONFIG_ACPI_SLEEP_PROC_FS 1
#define CONFIG_ACPI_AC 1
#define CONFIG_ACPI_BATTERY 1
#define CONFIG_ACPI_BUTTON 1
#define CONFIG_ACPI_FAN 1
#define CONFIG_ACPI_PROCESSOR 1
#define CONFIG_ACPI_THERMAL 1
#undef CONFIG_ACPI_ASUS
#undef CONFIG_ACPI_TOSHIBA
#define CONFIG_ACPI_BLACKLIST_YEAR 0
#undef CONFIG_ACPI_DEBUG
#define CONFIG_ACPI_BUS 1
#define CONFIG_ACPI_EC 1
#define CONFIG_ACPI_POWER 1
#define CONFIG_ACPI_PCI 1
#define CONFIG_ACPI_SYSTEM 1
#undef CONFIG_X86_PM_TIMER

/*
 * APM (Advanced Power Management) BIOS Support
 */
#undef CONFIG_APM

/*
 * CPU Frequency scaling
 */
#undef CONFIG_CPU_FREQ

/*
 * Bus options (PCI, PCMCIA, EISA, MCA, ISA)
 */
#define CONFIG_PCI 1
#undef CONFIG_PCI_GOBIOS
#undef CONFIG_PCI_GOMMCONFIG
#undef CONFIG_PCI_GODIRECT
#define CONFIG_PCI_GOANY 1
#define CONFIG_PCI_BIOS 1
#define CONFIG_PCI_DIRECT 1
#define CONFIG_PCI_MMCONFIG 1
#undef CONFIG_PCI_MSI
#define CONFIG_PCI_LEGACY_PROC 1
#define CONFIG_PCI_NAMES 1
#define CONFIG_ISA 1
#undef CONFIG_EISA
#undef CONFIG_MCA
#undef CONFIG_SCx200

/*
 * PCMCIA/CardBus support
 */
#undef CONFIG_PCMCIA
#define CONFIG_PCMCIA_PROBE 1

/*
 * PCI Hotplug Support
 */
#undef CONFIG_HOTPLUG_PCI

/*
 * Executable file formats
 */
#define CONFIG_BINFMT_ELF 1
#define CONFIG_BINFMT_AOUT 1
#define CONFIG_BINFMT_MISC 1

/*
 * Device Drivers
 */

/*
 * Generic Driver Options
 */
#define CONFIG_STANDALONE 1
#define CONFIG_PREVENT_FIRMWARE_BUILD 1
#define CONFIG_FW_LOADER_MODULE 1

/*
 * Memory Technology Devices (MTD)
 */
#undef CONFIG_MTD

/*
 * Parallel port support
 */
#define CONFIG_PARPORT 1
#define CONFIG_PARPORT_PC 1
#define CONFIG_PARPORT_PC_CML1 1
#undef CONFIG_PARPORT_SERIAL
#undef CONFIG_PARPORT_PC_FIFO
#undef CONFIG_PARPORT_PC_SUPERIO
#undef CONFIG_PARPORT_OTHER
#undef CONFIG_PARPORT_1284

/*
 * Plug and Play support
 */
#define CONFIG_PNP 1
#undef CONFIG_PNP_DEBUG

/*
 * Protocols
 */
#undef CONFIG_ISAPNP
#undef CONFIG_PNPBIOS

/*
 * Block devices
 */
#define CONFIG_BLK_DEV_FD 1
#undef CONFIG_BLK_DEV_XD
#undef CONFIG_PARIDE
#undef CONFIG_BLK_CPQ_DA
#undef CONFIG_BLK_CPQ_CISS_DA
#undef CONFIG_BLK_DEV_DAC960
#undef CONFIG_BLK_DEV_UMEM
#undef CONFIG_BLK_DEV_LOOP
#undef CONFIG_BLK_DEV_NBD
#undef CONFIG_BLK_DEV_SX8
#undef CONFIG_BLK_DEV_UB
#undef CONFIG_BLK_DEV_RAM
#define CONFIG_LBD 1

/*
 * ATA/ATAPI/MFM/RLL support
 */
#define CONFIG_IDE 1
#define CONFIG_BLK_DEV_IDE 1

/*
 * Please see Documentation/ide.txt for help/info on IDE drives
 */
#undef CONFIG_BLK_DEV_IDE_SATA
#undef CONFIG_BLK_DEV_HD_IDE
#define CONFIG_BLK_DEV_IDEDISK 1
#define CONFIG_IDEDISK_MULTI_MODE 1
#define CONFIG_BLK_DEV_IDECD 1
#undef CONFIG_BLK_DEV_IDETAPE
#undef CONFIG_BLK_DEV_IDEFLOPPY
#undef CONFIG_BLK_DEV_IDESCSI
#undef CONFIG_IDE_TASK_IOCTL
#define CONFIG_IDE_TASKFILE_IO 1

/*
 * IDE chipset support/bugfixes
 */
#define CONFIG_IDE_GENERIC 1
#define CONFIG_BLK_DEV_CMD640 1
#undef CONFIG_BLK_DEV_CMD640_ENHANCED
#undef CONFIG_BLK_DEV_IDEPNP
#define CONFIG_BLK_DEV_IDEPCI 1
#define CONFIG_IDEPCI_SHARE_IRQ 1
#undef CONFIG_BLK_DEV_OFFBOARD
#define CONFIG_BLK_DEV_GENERIC 1
#undef CONFIG_BLK_DEV_OPTI621
#define CONFIG_BLK_DEV_RZ1000 1
#define CONFIG_BLK_DEV_IDEDMA_PCI 1
#undef CONFIG_BLK_DEV_IDEDMA_FORCED
#define CONFIG_IDEDMA_PCI_AUTO 1
#undef CONFIG_IDEDMA_ONLYDISK
#undef CONFIG_BLK_DEV_AEC62XX
#undef CONFIG_BLK_DEV_ALI15X3
#undef CONFIG_BLK_DEV_AMD74XX
#undef CONFIG_BLK_DEV_ATIIXP
#undef CONFIG_BLK_DEV_CMD64X
#undef CONFIG_BLK_DEV_TRIFLEX
#undef CONFIG_BLK_DEV_CY82C693
#undef CONFIG_BLK_DEV_CS5520
#undef CONFIG_BLK_DEV_CS5530
#undef CONFIG_BLK_DEV_HPT34X
#undef CONFIG_BLK_DEV_HPT366
#undef CONFIG_BLK_DEV_SC1200
#define CONFIG_BLK_DEV_PIIX 1
#undef CONFIG_BLK_DEV_NS87415
#undef CONFIG_BLK_DEV_PDC202XX_OLD
#undef CONFIG_BLK_DEV_PDC202XX_NEW
#undef CONFIG_BLK_DEV_SVWKS
#undef CONFIG_BLK_DEV_SIIMAGE
#undef CONFIG_BLK_DEV_SIS5513
#undef CONFIG_BLK_DEV_SLC90E66
#undef CONFIG_BLK_DEV_TRM290
#undef CONFIG_BLK_DEV_VIA82CXXX
#undef CONFIG_IDE_ARM
#undef CONFIG_IDE_CHIPSETS
#define CONFIG_BLK_DEV_IDEDMA 1
#undef CONFIG_IDEDMA_IVB
#define CONFIG_IDEDMA_AUTO 1
#undef CONFIG_BLK_DEV_HD

/*
 * SCSI device support
 */
#define CONFIG_SCSI 1
#define CONFIG_SCSI_PROC_FS 1

/*
 * SCSI support type (disk, tape, CD-ROM)
 */
#define CONFIG_BLK_DEV_SD 1
#undef CONFIG_CHR_DEV_ST
#undef CONFIG_CHR_DEV_OSST
#undef CONFIG_BLK_DEV_SR
#define CONFIG_CHR_DEV_SG 1

/*
 * Some SCSI devices (e.g. CD jukebox) support multiple LUNs
 */
#undef CONFIG_SCSI_MULTI_LUN
#undef CONFIG_SCSI_CONSTANTS
#undef CONFIG_SCSI_LOGGING

/*
 * SCSI Transport Attributes
 */
#undef CONFIG_SCSI_SPI_ATTRS
#undef CONFIG_SCSI_FC_ATTRS

/*
 * SCSI low-level drivers
 */
#undef CONFIG_BLK_DEV_3W_XXXX_RAID
#undef CONFIG_SCSI_3W_9XXX
#undef CONFIG_SCSI_7000FASST
#undef CONFIG_SCSI_ACARD
#undef CONFIG_SCSI_AHA152X
#undef CONFIG_SCSI_AHA1542
#undef CONFIG_SCSI_AACRAID
#undef CONFIG_SCSI_AIC7XXX
#undef CONFIG_SCSI_AIC7XXX_OLD
#undef CONFIG_SCSI_AIC79XX
#define CONFIG_SCSI_DPT_I2O_MODULE 1
#undef CONFIG_SCSI_IN2000
#undef CONFIG_MEGARAID_NEWGEN
#undef CONFIG_MEGARAID_LEGACY
#define CONFIG_SCSI_SATA 1
#undef CONFIG_SCSI_SATA_SVW
#define CONFIG_SCSI_ATA_PIIX 1
#undef CONFIG_SCSI_SATA_NV
#undef CONFIG_SCSI_SATA_PROMISE
#define CONFIG_SCSI_SATA_SX4_MODULE 1
#undef CONFIG_SCSI_SATA_SIL
#define CONFIG_SCSI_SATA_SIS_MODULE 1
#undef CONFIG_SCSI_SATA_VIA
#undef CONFIG_SCSI_SATA_VITESSE
#undef CONFIG_SCSI_BUSLOGIC
#undef CONFIG_SCSI_DMX3191D
#undef CONFIG_SCSI_DTC3280
#undef CONFIG_SCSI_EATA
#undef CONFIG_SCSI_EATA_PIO
#undef CONFIG_SCSI_FUTURE_DOMAIN
#undef CONFIG_SCSI_GDTH
#undef CONFIG_SCSI_GENERIC_NCR5380
#undef CONFIG_SCSI_GENERIC_NCR5380_MMIO
#undef CONFIG_SCSI_IPS
#undef CONFIG_SCSI_INIA100
#undef CONFIG_SCSI_PPA
#undef CONFIG_SCSI_IMM
#undef CONFIG_SCSI_NCR53C406A
#undef CONFIG_SCSI_SYM53C8XX_2
#define CONFIG_SCSI_IPR_MODULE 1
#undef CONFIG_SCSI_IPR_TRACE
#undef CONFIG_SCSI_IPR_DUMP
#undef CONFIG_SCSI_PAS16
#undef CONFIG_SCSI_PSI240I
#undef CONFIG_SCSI_QLOGIC_FAS
#undef CONFIG_SCSI_QLOGIC_ISP
#undef CONFIG_SCSI_QLOGIC_FC
#undef CONFIG_SCSI_QLOGIC_1280
#define CONFIG_SCSI_QLA2XXX 1
#undef CONFIG_SCSI_QLA21XX
#undef CONFIG_SCSI_QLA22XX
#undef CONFIG_SCSI_QLA2300
#undef CONFIG_SCSI_QLA2322
#undef CONFIG_SCSI_QLA6312
#undef CONFIG_SCSI_QLA6322
#undef CONFIG_SCSI_SYM53C416
#undef CONFIG_SCSI_DC395x
#undef CONFIG_SCSI_DC390T
#undef CONFIG_SCSI_T128
#undef CONFIG_SCSI_U14_34F
#undef CONFIG_SCSI_ULTRASTOR
#undef CONFIG_SCSI_NSP32
#undef CONFIG_SCSI_DEBUG

/*
 * Old CD-ROM drivers (not SCSI, not IDE)
 */
#undef CONFIG_CD_NO_IDESCSI

/*
 * Multi-device support (RAID and LVM)
 */
#undef CONFIG_MD

/*
 * Fusion MPT device support
 */
#undef CONFIG_FUSION

/*
 * IEEE 1394 (FireWire) support
 */
#define CONFIG_IEEE1394 1

/*
 * Subsystem Options
 */
#undef CONFIG_IEEE1394_VERBOSEDEBUG
#undef CONFIG_IEEE1394_OUI_DB
#undef CONFIG_IEEE1394_EXTRA_CONFIG_ROMS

/*
 * Device Drivers
 */

/*
 * Texas Instruments PCILynx requires I2C
 */
#define CONFIG_IEEE1394_OHCI1394 1

/*
 * Protocol Drivers
 */
#undef CONFIG_IEEE1394_VIDEO1394
#undef CONFIG_IEEE1394_SBP2
#undef CONFIG_IEEE1394_ETH1394
#undef CONFIG_IEEE1394_DV1394
#define CONFIG_IEEE1394_RAWIO 1
#undef CONFIG_IEEE1394_CMP

/*
 * I2O device support
 */
#undef CONFIG_I2O

/*
 * Networking support
 */
#define CONFIG_NET 1

/*
 * Networking options
 */
#define CONFIG_PACKET 1
#undef CONFIG_PACKET_MMAP
#undef CONFIG_NETLINK_DEV
#define CONFIG_UNIX 1
#undef CONFIG_NET_KEY
#define CONFIG_INET 1
#define CONFIG_IP_MULTICAST 1
#undef CONFIG_IP_ADVANCED_ROUTER
#undef CONFIG_IP_PNP
#undef CONFIG_NET_IPIP
#undef CONFIG_NET_IPGRE
#undef CONFIG_IP_MROUTE
#undef CONFIG_ARPD
#undef CONFIG_SYN_COOKIES
#undef CONFIG_INET_AH
#undef CONFIG_INET_ESP
#undef CONFIG_INET_IPCOMP
#undef CONFIG_INET_TUNNEL

/*
 * IP: Virtual Server Configuration
 */
#undef CONFIG_IP_VS
#define CONFIG_IPV6 1
#undef CONFIG_IPV6_PRIVACY
#undef CONFIG_INET6_AH
#undef CONFIG_INET6_ESP
#undef CONFIG_INET6_IPCOMP
#undef CONFIG_INET6_TUNNEL
#undef CONFIG_IPV6_TUNNEL
#define CONFIG_NETFILTER 1
#undef CONFIG_NETFILTER_DEBUG

/*
 * IP: Netfilter Configuration
 */
#define CONFIG_IP_NF_CONNTRACK 1
#undef CONFIG_IP_NF_CT_ACCT
#undef CONFIG_IP_NF_CT_PROTO_SCTP
#undef CONFIG_IP_NF_FTP
#undef CONFIG_IP_NF_IRC
#undef CONFIG_IP_NF_TFTP
#undef CONFIG_IP_NF_AMANDA
#define CONFIG_IP_NF_QUEUE 1
#define CONFIG_IP_NF_IPTABLES 1
#define CONFIG_IP_NF_MATCH_LIMIT 1
#define CONFIG_IP_NF_MATCH_IPRANGE 1
#define CONFIG_IP_NF_MATCH_MAC 1
#define CONFIG_IP_NF_MATCH_PKTTYPE 1
#define CONFIG_IP_NF_MATCH_MARK 1
#define CONFIG_IP_NF_MATCH_MULTIPORT 1
#define CONFIG_IP_NF_MATCH_TOS 1
#define CONFIG_IP_NF_MATCH_RECENT 1
#define CONFIG_IP_NF_MATCH_ECN 1
#define CONFIG_IP_NF_MATCH_DSCP 1
#define CONFIG_IP_NF_MATCH_AH_ESP 1
#define CONFIG_IP_NF_MATCH_LENGTH 1
#define CONFIG_IP_NF_MATCH_TTL 1
#define CONFIG_IP_NF_MATCH_TCPMSS 1
#define CONFIG_IP_NF_MATCH_HELPER 1
#define CONFIG_IP_NF_MATCH_STATE 1
#define CONFIG_IP_NF_MATCH_CONNTRACK 1
#define CONFIG_IP_NF_MATCH_OWNER 1
#undef CONFIG_IP_NF_MATCH_ADDRTYPE
#undef CONFIG_IP_NF_MATCH_REALM
#undef CONFIG_IP_NF_MATCH_SCTP
#undef CONFIG_IP_NF_MATCH_COMMENT
#define CONFIG_IP_NF_FILTER 1
#define CONFIG_IP_NF_TARGET_REJECT 1
#define CONFIG_IP_NF_TARGET_LOG 1
#define CONFIG_IP_NF_TARGET_ULOG 1
#define CONFIG_IP_NF_TARGET_TCPMSS 1
#define CONFIG_IP_NF_NAT 1
#define CONFIG_IP_NF_NAT_NEEDED 1
#define CONFIG_IP_NF_TARGET_MASQUERADE 1
#define CONFIG_IP_NF_TARGET_REDIRECT 1
#define CONFIG_IP_NF_TARGET_NETMAP 1
#define CONFIG_IP_NF_TARGET_SAME 1
#undef CONFIG_IP_NF_NAT_LOCAL
#undef CONFIG_IP_NF_NAT_SNMP_BASIC
#define CONFIG_IP_NF_MANGLE 1
#define CONFIG_IP_NF_TARGET_TOS 1
#define CONFIG_IP_NF_TARGET_ECN 1
#define CONFIG_IP_NF_TARGET_DSCP 1
#define CONFIG_IP_NF_TARGET_MARK 1
#define CONFIG_IP_NF_TARGET_CLASSIFY 1
#define CONFIG_IP_NF_RAW_MODULE 1
#define CONFIG_IP_NF_TARGET_NOTRACK_MODULE 1
#define CONFIG_IP_NF_ARPTABLES 1
#define CONFIG_IP_NF_ARPFILTER 1
#define CONFIG_IP_NF_ARP_MANGLE 1

/*
 * IPv6: Netfilter Configuration
 */
#undef CONFIG_IP6_NF_QUEUE
#undef CONFIG_IP6_NF_IPTABLES

/*
 * SCTP Configuration (EXPERIMENTAL)
 */
#define CONFIG_IP_SCTP 1
#undef CONFIG_SCTP_DBG_MSG
#undef CONFIG_SCTP_DBG_OBJCNT
#undef CONFIG_SCTP_HMAC_NONE
#undef CONFIG_SCTP_HMAC_SHA1
#define CONFIG_SCTP_HMAC_MD5 1
#undef CONFIG_ATM
#undef CONFIG_BRIDGE
#undef CONFIG_VLAN_8021Q
#undef CONFIG_DECNET
#undef CONFIG_LLC2
#undef CONFIG_IPX
#undef CONFIG_ATALK
#undef CONFIG_X25
#undef CONFIG_LAPB
#undef CONFIG_NET_DIVERT
#undef CONFIG_ECONET
#undef CONFIG_WAN_ROUTER
#undef CONFIG_NET_HW_FLOWCONTROL

/*
 * QoS and/or fair queueing
 */
#undef CONFIG_NET_SCHED
#undef CONFIG_NET_SCH_CLK_JIFFIES
#undef CONFIG_NET_SCH_CLK_GETTIMEOFDAY
#undef CONFIG_NET_SCH_CLK_CPU
#undef CONFIG_NET_CLS_ROUTE

/*
 * Network testing
 */
#undef CONFIG_NET_PKTGEN
#undef CONFIG_NETPOLL
#undef CONFIG_NET_POLL_CONTROLLER
#undef CONFIG_HAMRADIO
#undef CONFIG_IRDA
#undef CONFIG_BT
#define CONFIG_NETDEVICES 1
#define CONFIG_DUMMY_MODULE 1
#undef CONFIG_BONDING
#undef CONFIG_EQUALIZER
#undef CONFIG_TUN
#undef CONFIG_NET_SB1000

/*
 * ARCnet devices
 */
#undef CONFIG_ARCNET

/*
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1
#define CONFIG_MII 1
#undef CONFIG_HAPPYMEAL
#undef CONFIG_SUNGEM
#undef CONFIG_NET_VENDOR_3COM
#undef CONFIG_LANCE
#undef CONFIG_NET_VENDOR_SMC
#undef CONFIG_NET_VENDOR_RACAL

/*
 * Tulip family network device support
 */
#undef CONFIG_NET_TULIP
#undef CONFIG_AT1700
#undef CONFIG_DEPCA
#undef CONFIG_HP100
#undef CONFIG_NET_ISA
#define CONFIG_NET_PCI 1
#undef CONFIG_PCNET32
#undef CONFIG_AMD8111_ETH
#undef CONFIG_ADAPTEC_STARFIRE
#undef CONFIG_AC3200
#undef CONFIG_APRICOT
#undef CONFIG_B44
#undef CONFIG_FORCEDETH
#undef CONFIG_CS89x0
#undef CONFIG_DGRS
#undef CONFIG_EEPRO100
#undef CONFIG_E100
#undef CONFIG_FEALNX
#undef CONFIG_NATSEMI
#undef CONFIG_NE2K_PCI
#undef CONFIG_8139CP
#define CONFIG_8139TOO 1
#define CONFIG_8139TOO_PIO 1
#undef CONFIG_8139TOO_TUNE_TWISTER
#undef CONFIG_8139TOO_8129
#undef CONFIG_8139_OLD_RX_RESET
#undef CONFIG_SIS900
#undef CONFIG_EPIC100
#undef CONFIG_SUNDANCE
#undef CONFIG_TLAN
#undef CONFIG_VIA_RHINE
#undef CONFIG_VIA_VELOCITY
#undef CONFIG_NET_POCKET

/*
 * Ethernet (1000 Mbit)
 */
#undef CONFIG_ACENIC
#undef CONFIG_DL2K
#undef CONFIG_E1000
#undef CONFIG_NS83820
#undef CONFIG_HAMACHI
#undef CONFIG_YELLOWFIN
#undef CONFIG_R8169
#undef CONFIG_SK98LIN
#undef CONFIG_TIGON3

/*
 * Ethernet (10000 Mbit)
 */
#undef CONFIG_IXGB
#define CONFIG_S2IO_MODULE 1
#undef CONFIG_S2IO_NAPI

/*
 * Token Ring devices
 */
#undef CONFIG_TR

/*
 * Wireless LAN (non-hamradio)
 */
#undef CONFIG_NET_RADIO

/*
 * Wan interfaces
 */
#undef CONFIG_WAN
#undef CONFIG_FDDI
#undef CONFIG_HIPPI
#undef CONFIG_PLIP
#undef CONFIG_PPP
#undef CONFIG_SLIP
#undef CONFIG_NET_FC
#undef CONFIG_SHAPER
#undef CONFIG_NETCONSOLE

/*
 * ISDN subsystem
 */
#undef CONFIG_ISDN

/*
 * Telephony Support
 */
#undef CONFIG_PHONE

/*
 * Input device support
 */
#define CONFIG_INPUT 1

/*
 * Userland interfaces
 */
#define CONFIG_INPUT_MOUSEDEV 1
#define CONFIG_INPUT_MOUSEDEV_PSAUX 1
#define CONFIG_INPUT_MOUSEDEV_SCREEN_X 1024
#define CONFIG_INPUT_MOUSEDEV_SCREEN_Y 768
#undef CONFIG_INPUT_JOYDEV
#undef CONFIG_INPUT_TSDEV
#undef CONFIG_INPUT_EVDEV
#undef CONFIG_INPUT_EVBUG

/*
 * Input I/O drivers
 */
#undef CONFIG_GAMEPORT
#define CONFIG_SOUND_GAMEPORT 1
#define CONFIG_SERIO 1
#define CONFIG_SERIO_I8042 1
#undef CONFIG_SERIO_SERPORT
#undef CONFIG_SERIO_CT82C710
#undef CONFIG_SERIO_PARKBD
#undef CONFIG_SERIO_PCIPS2
#undef CONFIG_SERIO_RAW

/*
 * Input Device Drivers
 */
#define CONFIG_INPUT_KEYBOARD 1
#define CONFIG_KEYBOARD_ATKBD 1
#undef CONFIG_KEYBOARD_SUNKBD
#undef CONFIG_KEYBOARD_LKKBD
#undef CONFIG_KEYBOARD_XTKBD
#undef CONFIG_KEYBOARD_NEWTON
#define CONFIG_INPUT_MOUSE 1
#define CONFIG_MOUSE_PS2 1
#undef CONFIG_MOUSE_SERIAL
#undef CONFIG_MOUSE_INPORT
#undef CONFIG_MOUSE_LOGIBM
#undef CONFIG_MOUSE_PC110PAD
#undef CONFIG_MOUSE_VSXXXAA
#undef CONFIG_INPUT_JOYSTICK
#undef CONFIG_INPUT_TOUCHSCREEN
#undef CONFIG_INPUT_MISC

/*
 * Character devices
 */
#define CONFIG_VT 1
#define CONFIG_VT_CONSOLE 1
#define CONFIG_HW_CONSOLE 1
#undef CONFIG_SERIAL_NONSTANDARD

/*
 * Serial drivers
 */
#define CONFIG_SERIAL_8250 1
#undef CONFIG_SERIAL_8250_CONSOLE
#undef CONFIG_SERIAL_8250_ACPI
#define CONFIG_SERIAL_8250_NR_UARTS 4
#undef CONFIG_SERIAL_8250_EXTENDED

/*
 * Non-8250 serial port support
 */
#define CONFIG_SERIAL_CORE 1
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_LEGACY_PTYS 1
#define CONFIG_LEGACY_PTY_COUNT 256
#define CONFIG_PRINTER 1
#undef CONFIG_LP_CONSOLE
#undef CONFIG_PPDEV
#undef CONFIG_TIPAR

/*
 * IPMI
 */
#undef CONFIG_IPMI_HANDLER

/*
 * Watchdog Cards
 */
#undef CONFIG_WATCHDOG
#undef CONFIG_HW_RANDOM
#undef CONFIG_NVRAM
#undef CONFIG_RTC
#undef CONFIG_GEN_RTC
#undef CONFIG_DTLK
#undef CONFIG_R3964
#undef CONFIG_APPLICOM
#undef CONFIG_SONYPI

/*
 * Ftape, the floppy tape device driver
 */
#define CONFIG_AGP 1
#undef CONFIG_AGP_ALI
#undef CONFIG_AGP_ATI
#undef CONFIG_AGP_AMD
#undef CONFIG_AGP_AMD64
#define CONFIG_AGP_INTEL 1
#define CONFIG_AGP_INTEL_MCH_MODULE 1
#undef CONFIG_AGP_NVIDIA
#undef CONFIG_AGP_SIS
#undef CONFIG_AGP_SWORKS
#undef CONFIG_AGP_VIA
#undef CONFIG_AGP_EFFICEON
#define CONFIG_DRM 1
#undef CONFIG_DRM_TDFX
#undef CONFIG_DRM_R128
#undef CONFIG_DRM_RADEON
#undef CONFIG_DRM_I810
#undef CONFIG_DRM_I830
#undef CONFIG_DRM_I915
#undef CONFIG_DRM_MGA
#undef CONFIG_DRM_SIS
#undef CONFIG_MWAVE
#undef CONFIG_RAW_DRIVER
#undef CONFIG_HPET
#undef CONFIG_HANGCHECK_TIMER

/*
 * I2C support
 */
#undef CONFIG_I2C

/*
 * Dallas's 1-wire bus
 */
#undef CONFIG_W1

/*
 * Misc devices
 */
#undef CONFIG_IBM_ASM

/*
 * Multimedia devices
 */
#undef CONFIG_VIDEO_DEV

/*
 * Digital Video Broadcasting Devices
 */
#undef CONFIG_DVB

/*
 * Graphics support
 */
#undef CONFIG_FB
#undef CONFIG_VIDEO_SELECT

/*
 * Console display driver support
 */
#define CONFIG_VGA_CONSOLE 1
#undef CONFIG_MDA_CONSOLE
#define CONFIG_DUMMY_CONSOLE 1

/*
 * Sound
 */
#undef CONFIG_SOUND

/*
 * USB support
 */
#define CONFIG_USB 1
#undef CONFIG_USB_DEBUG

/*
 * Miscellaneous USB options
 */
#define CONFIG_USB_DEVICEFS 1
#undef CONFIG_USB_BANDWIDTH
#undef CONFIG_USB_DYNAMIC_MINORS
#undef CONFIG_USB_SUSPEND
#undef CONFIG_USB_OTG

/*
 * USB Host Controller Drivers
 */
#define CONFIG_USB_EHCI_HCD 1
#undef CONFIG_USB_EHCI_SPLIT_ISO
#undef CONFIG_USB_EHCI_ROOT_HUB_TT
#undef CONFIG_USB_OHCI_HCD
#define CONFIG_USB_UHCI_HCD 1

/*
 * USB Device Class drivers
 */
#undef CONFIG_USB_BLUETOOTH_TTY
#undef CONFIG_USB_ACM
#define CONFIG_USB_PRINTER 1
#define CONFIG_USB_STORAGE 1
#undef CONFIG_USB_STORAGE_DEBUG
#undef CONFIG_USB_STORAGE_RW_DETECT
#undef CONFIG_USB_STORAGE_DATAFAB
#undef CONFIG_USB_STORAGE_FREECOM
#undef CONFIG_USB_STORAGE_ISD200
#undef CONFIG_USB_STORAGE_DPCM
#undef CONFIG_USB_STORAGE_HP8200e
#undef CONFIG_USB_STORAGE_SDDR09
#undef CONFIG_USB_STORAGE_SDDR55
#undef CONFIG_USB_STORAGE_JUMPSHOT

/*
 * USB Human Interface Devices (HID)
 */
#define CONFIG_USB_HID 1
#define CONFIG_USB_HIDINPUT 1
#undef CONFIG_HID_FF
#undef CONFIG_USB_HIDDEV
#undef CONFIG_USB_AIPTEK
#undef CONFIG_USB_WACOM
#undef CONFIG_USB_KBTAB
#undef CONFIG_USB_POWERMATE
#undef CONFIG_USB_MTOUCH
#define CONFIG_USB_EGALAX_MODULE 1
#undef CONFIG_USB_XPAD
#undef CONFIG_USB_ATI_REMOTE

/*
 * USB Imaging devices
 */
#undef CONFIG_USB_MDC800
#undef CONFIG_USB_MICROTEK
#undef CONFIG_USB_HPUSBSCSI

/*
 * USB Multimedia devices
 */
#undef CONFIG_USB_DABUSB

/*
 * Video4Linux support is needed for USB Multimedia device support
 */

/*
 * USB Network adaptors
 */
#undef CONFIG_USB_CATC
#undef CONFIG_USB_KAWETH
#undef CONFIG_USB_PEGASUS
#undef CONFIG_USB_RTL8150
#undef CONFIG_USB_USBNET

/*
 * USB port drivers
 */
#undef CONFIG_USB_USS720

/*
 * USB Serial Converter support
 */
#undef CONFIG_USB_SERIAL

/*
 * USB Miscellaneous drivers
 */
#undef CONFIG_USB_EMI62
#undef CONFIG_USB_EMI26
#undef CONFIG_USB_TIGL
#undef CONFIG_USB_AUERSWALD
#undef CONFIG_USB_RIO500
#undef CONFIG_USB_LEGOTOWER
#undef CONFIG_USB_LCD
#undef CONFIG_USB_LED
#define CONFIG_USB_CYTHERM_MODULE 1
#define CONFIG_USB_PHIDGETSERVO_MODULE 1
#undef CONFIG_USB_TEST

/*
 * USB Gadget Support
 */
#undef CONFIG_USB_GADGET

/*
 * File systems
 */
#define CONFIG_EXT2_FS 1
#undef CONFIG_EXT2_FS_XATTR
#define CONFIG_EXT3_FS 1
#define CONFIG_EXT3_FS_XATTR 1
#undef CONFIG_EXT3_FS_POSIX_ACL
#undef CONFIG_EXT3_FS_SECURITY
#define CONFIG_JBD 1
#undef CONFIG_JBD_DEBUG
#define CONFIG_FS_MBCACHE 1
#undef CONFIG_REISERFS_FS
#undef CONFIG_JFS_FS
#undef CONFIG_XFS_FS
#undef CONFIG_MINIX_FS
#undef CONFIG_ROMFS_FS
#undef CONFIG_QUOTA
#undef CONFIG_AUTOFS_FS
#define CONFIG_AUTOFS4_FS 1

/*
 * CD-ROM/DVD Filesystems
 */
#define CONFIG_ISO9660_FS 1
#define CONFIG_JOLIET 1
#undef CONFIG_ZISOFS
#define CONFIG_UDF_FS 1
#define CONFIG_UDF_NLS 1

/*
 * DOS/FAT/NT Filesystems
 */
#define CONFIG_FAT_FS 1
#define CONFIG_MSDOS_FS 1
#define CONFIG_VFAT_FS 1
#define CONFIG_FAT_DEFAULT_CODEPAGE 437
#define CONFIG_FAT_DEFAULT_IOCHARSET "iso8859-1"
#undef CONFIG_NTFS_FS

/*
 * Pseudo filesystems
 */
#define CONFIG_PROC_FS 1
#define CONFIG_PROC_KCORE 1
#define CONFIG_SYSFS 1
#undef CONFIG_DEVFS_FS
#undef CONFIG_DEVPTS_FS_XATTR
#define CONFIG_TMPFS 1
#undef CONFIG_HUGETLBFS
#undef CONFIG_HUGETLB_PAGE
#define CONFIG_RAMFS 1

/*
 * Miscellaneous filesystems
 */
#undef CONFIG_ADFS_FS
#undef CONFIG_AFFS_FS
#undef CONFIG_HFS_FS
#undef CONFIG_HFSPLUS_FS
#undef CONFIG_BEFS_FS
#undef CONFIG_BFS_FS
#undef CONFIG_EFS_FS
#undef CONFIG_CRAMFS
#undef CONFIG_VXFS_FS
#undef CONFIG_HPFS_FS
#undef CONFIG_QNX4FS_FS
#undef CONFIG_SYSV_FS
#undef CONFIG_UFS_FS

/*
 * Network File Systems
 */
#define CONFIG_NFS_FS 1
#undef CONFIG_NFS_V3
#undef CONFIG_NFS_V4
#undef CONFIG_NFS_DIRECTIO
#define CONFIG_NFSD 1
#undef CONFIG_NFSD_V3
#define CONFIG_NFSD_TCP 1
#define CONFIG_LOCKD 1
#define CONFIG_EXPORTFS 1
#define CONFIG_SUNRPC 1
#undef CONFIG_RPCSEC_GSS_KRB5
#undef CONFIG_RPCSEC_GSS_SPKM3
#undef CONFIG_SMB_FS
#undef CONFIG_CIFS
#undef CONFIG_NCP_FS
#undef CONFIG_CODA_FS
#undef CONFIG_AFS_FS

/*
 * Partition Types
 */
#undef CONFIG_PARTITION_ADVANCED
#define CONFIG_MSDOS_PARTITION 1

/*
 * Native Language Support
 */
#define CONFIG_NLS 1
#define CONFIG_NLS_DEFAULT "iso8859-1"
#define CONFIG_NLS_CODEPAGE_437 1
#undef CONFIG_NLS_CODEPAGE_737
#undef CONFIG_NLS_CODEPAGE_775
#undef CONFIG_NLS_CODEPAGE_850
#undef CONFIG_NLS_CODEPAGE_852
#undef CONFIG_NLS_CODEPAGE_855
#undef CONFIG_NLS_CODEPAGE_857
#undef CONFIG_NLS_CODEPAGE_860
#undef CONFIG_NLS_CODEPAGE_861
#undef CONFIG_NLS_CODEPAGE_862
#undef CONFIG_NLS_CODEPAGE_863
#undef CONFIG_NLS_CODEPAGE_864
#undef CONFIG_NLS_CODEPAGE_865
#undef CONFIG_NLS_CODEPAGE_866
#undef CONFIG_NLS_CODEPAGE_869
#undef CONFIG_NLS_CODEPAGE_936
#undef CONFIG_NLS_CODEPAGE_950
#undef CONFIG_NLS_CODEPAGE_932
#undef CONFIG_NLS_CODEPAGE_949
#undef CONFIG_NLS_CODEPAGE_874
#undef CONFIG_NLS_ISO8859_8
#undef CONFIG_NLS_CODEPAGE_1250
#undef CONFIG_NLS_CODEPAGE_1251
#undef CONFIG_NLS_ASCII
#define CONFIG_NLS_ISO8859_1 1
#undef CONFIG_NLS_ISO8859_2
#undef CONFIG_NLS_ISO8859_3
#undef CONFIG_NLS_ISO8859_4
#undef CONFIG_NLS_ISO8859_5
#undef CONFIG_NLS_ISO8859_6
#undef CONFIG_NLS_ISO8859_7
#undef CONFIG_NLS_ISO8859_9
#undef CONFIG_NLS_ISO8859_13
#undef CONFIG_NLS_ISO8859_14
#undef CONFIG_NLS_ISO8859_15
#undef CONFIG_NLS_KOI8_R
#undef CONFIG_NLS_KOI8_U
#undef CONFIG_NLS_UTF8

/*
 * Profiling support
 */
#define CONFIG_PROFILING 1
#define CONFIG_OPROFILE 1

/*
 * Kernel hacking
 */
#undef CONFIG_DEBUG_KERNEL
#define CONFIG_FRAME_POINTER 1
#define CONFIG_EARLY_PRINTK 1
#define CONFIG_4KSTACKS 1
#define CONFIG_X86_FIND_SMP_CONFIG 1
#define CONFIG_X86_MPPARSE 1

/*
 * Security options
 */
#undef CONFIG_SECURITY

/*
 * Cryptographic options
 */
#define CONFIG_CRYPTO 1
#define CONFIG_CRYPTO_HMAC 1
#undef CONFIG_CRYPTO_NULL
#undef CONFIG_CRYPTO_MD4
#define CONFIG_CRYPTO_MD5 1
#undef CONFIG_CRYPTO_SHA1
#undef CONFIG_CRYPTO_SHA256
#undef CONFIG_CRYPTO_SHA512
#undef CONFIG_CRYPTO_WP512
#undef CONFIG_CRYPTO_DES
#undef CONFIG_CRYPTO_BLOWFISH
#undef CONFIG_CRYPTO_TWOFISH
#undef CONFIG_CRYPTO_SERPENT
#undef CONFIG_CRYPTO_AES_586
#undef CONFIG_CRYPTO_CAST5
#undef CONFIG_CRYPTO_CAST6
#undef CONFIG_CRYPTO_TEA
#undef CONFIG_CRYPTO_ARC4
#undef CONFIG_CRYPTO_KHAZAD
#undef CONFIG_CRYPTO_DEFLATE
#undef CONFIG_CRYPTO_MICHAEL_MIC
#undef CONFIG_CRYPTO_CRC32C
#undef CONFIG_CRYPTO_TEST

/*
 * Library routines
 */
#undef CONFIG_CRC_CCITT
#define CONFIG_CRC32 1
#define CONFIG_LIBCRC32C_MODULE 1
#define CONFIG_X86_SMP 1
#define CONFIG_X86_HT 1
#define CONFIG_X86_BIOS_REBOOT 1
#define CONFIG_X86_TRAMPOLINE 1
#define CONFIG_PC 1
