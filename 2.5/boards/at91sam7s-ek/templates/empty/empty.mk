#
# Wizard autogenerated makefile.
# DO NOT EDIT, use the empty_user.mk file instead.
#

# Constants automatically defined by the selected modules
empty_DEBUG = 1

# Our target application
TRG += empty

empty_PREFIX = "arm-none-eabi-"

empty_SUFFIX = ""

empty_SRC_PATH = boards/at91sam7s-ek/templates/empty

empty_HW_PATH = boards/at91sam7s-ek

# Files automatically generated by the wizard. DO NOT EDIT, USE empty_USER_CSRC INSTEAD!
empty_WIZARD_CSRC = \
	bertos/cpu/arm/drv/timer_at91.c \
	bertos/kern/signal.c \
	bertos/kern/kfile.c \
	bertos/kern/sem.c \
	bertos/cpu/arm/drv/sysirq_at91.c \
	bertos/struct/heap.c \
	bertos/cpu/arm/drv/ser_arm.c \
	bertos/cpu/arm/drv/timer_arm.c \
	bertos/cpu/arm/drv/ser_at91.c \
	bertos/drv/timer.c \
	bertos/mware/event.c \
	bertos/kern/proc.c \
	bertos/mware/formatwr.c \
	bertos/drv/ser.c \
	bertos/mware/hex.c \
	#

# Files automatically generated by the wizard. DO NOT EDIT, USE empty_USER_PCSRC INSTEAD!
empty_WIZARD_PCSRC = \
	 \
	#

# Files automatically generated by the wizard. DO NOT EDIT, USE empty_USER_CPPASRC INSTEAD!
empty_WIZARD_CPPASRC = \
	bertos/cpu/arm/hw/switch_ctx_arm.S \
	#

# Files automatically generated by the wizard. DO NOT EDIT, USE empty_USER_CXXSRC INSTEAD!
empty_WIZARD_CXXSRC = \
	 \
	#

# Files automatically generated by the wizard. DO NOT EDIT, USE empty_USER_ASRC INSTEAD!
empty_WIZARD_ASRC = \
	 \
	#

empty_CPPFLAGS = -D'CPU_FREQ=(48023000UL)' -D'ARCH=(ARCH_DEFAULT)' -D'WIZ_AUTOGEN' -I$(empty_HW_PATH) -I$(empty_SRC_PATH) $(empty_CPU_CPPFLAGS) $(empty_USER_CPPFLAGS)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
empty_LDFLAGS = $(empty_CPU_LDFLAGS) $(empty_WIZARD_LDFLAGS) $(empty_USER_LDFLAGS)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
empty_CPPAFLAGS = $(empty_CPU_CPPAFLAGS) $(empty_WIZARD_CPPAFLAGS) $(empty_USER_CPPAFLAGS)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
empty_CSRC = $(empty_CPU_CSRC) $(empty_WIZARD_CSRC) $(empty_USER_CSRC)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
empty_PCSRC = $(empty_CPU_PCSRC) $(empty_WIZARD_PCSRC) $(empty_USER_PCSRC)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
empty_CPPASRC = $(empty_CPU_CPPASRC) $(empty_WIZARD_CPPASRC) $(empty_USER_CPPASRC)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
empty_CXXSRC = $(empty_CPU_CXXSRC) $(empty_WIZARD_CXXSRC) $(empty_USER_CXXSRC)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
empty_ASRC = $(empty_CPU_ASRC) $(empty_WIZARD_ASRC) $(empty_USER_ASRC)

# CPU specific flags and options, defined in the CPU definition files.
# Automatically generated by the wizard. PLEASE DO NOT EDIT!
empty_CPU_CPPASRC = bertos/cpu/arm/hw/crt_arm7tdmi.S bertos/cpu/arm/hw/vectors_at91.S
empty_CPU_CPPAFLAGS = -g -gdwarf-2
empty_CPU_CPPFLAGS = -O0 -g3 -gdwarf-2 -fverbose-asm -Ibertos/cpu/arm/ -D__ARM_AT91SAM7S256__
empty_CPU_CSRC = bertos/cpu/arm/hw/init_at91.c
empty_PROGRAMMER_CPU = at91sam7
empty_CPU_LDFLAGS = -nostartfiles -Wl,--no-warn-mismatch -T bertos/cpu/arm/scripts/at91sam7_256_rom.ld
empty_STOPFLASH_SCRIPT = bertos/prg_scripts/arm/stopopenocd.sh
empty_CPU = arm7tdmi
empty_STOPDEBUG_SCRIPT = bertos/prg_scripts/arm/stopopenocd.sh
empty_DEBUG_SCRIPT = bertos/prg_scripts/arm/debug.sh
empty_FLASH_SCRIPT = bertos/prg_scripts/arm/flash.sh

include $(empty_SRC_PATH)/empty_user.mk
