
.SUFFIXES : .c .o 

# AVR Compiler
CC = avr-gcc
# To generate .hex file 
OBJCOPY = avr-objcopy

INC = -I/usr/lib/avr/include
LIBS = /usr/lib/avr/lib
CPU = atmega328p
CFLAGS = -Os -mmcu=$(CPU) -Wl,--cref $(INC)

OBJS = test.o 
SRCS = $(OBJS:.o=.c)

TARGET = out.elf
TARGET_HEX = $(TARGET:.elf=.hex)
TARGET_MAP = $(TARGET:.elf=.map)

all : $(TARGET_HEX)

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(TARGET_HEX) : $(TARGET)
	$(OBJCOPY) -j .text -O ihex $< $@ 
 
dep :
	gccmakedep $(INC) $(SRCS)

clean :
	rm -rf $(OBJS) $(TARGET) $(TARGET_HEX) $(TARGET_MAP) core.SUFFIXES : .c .o 

# Below is automatically generated. Do not modify
# DO NOT DELETE
test.o: test.c /usr/lib/avr/include/avr/io.h \
 /usr/lib/avr/include/avr/sfr_defs.h /usr/lib/avr/include/inttypes.h \
 /usr/lib/avr/include/stdint.h /usr/lib/avr/include/avr/portpins.h \
 /usr/lib/avr/include/avr/common.h /usr/lib/avr/include/avr/version.h \
 /usr/lib/avr/include/avr/fuse.h /usr/lib/avr/include/avr/lock.h
