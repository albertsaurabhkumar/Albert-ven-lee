#############################################
##  Processor: S32K144
##  Author: Saurabh Kumar
##  GCC Version: 12.3
##  
##  Makefile for S32K144 Bootloader
#############################################

#RootDirectory with the Project paths
ROOT = ./..
SRC_DIR = $(ROOT)/app/src
INC_DIR = $(ROOT)/app/inc $(ROOT)/app/common 
BIN_DIR = $(ROOT)/build/bin
OBJ_DIR = $(ROOT)/build/obj

#Compiler Directories
CC_DIR = $(ROOT)/tools/CC/gcc-10.3
CC_BIN = $(CC_DIR)/bin
CC_INC = $(CC_DIR)/include
CC_LIB = $(CC_DIR)/lib

#Compilar Path
CC = $(CC_BIN)/arm-none-eabi-gcc
OBJSIZE = $(CC_BIN)/arm-none-eabi-size
OBJDUMP = $(CC_BIN)/arm-none-eabi-objdump
OBJCOPY = $(CC_BIN)/arm-none-eabi-objcopy

#Project Name
PROJECT = S32_BL

SRC = $(wildcard $(SRC_DIR)/*.c)
INC = $(wildcard $(INC_DIR)/*.h) $(ROOT)/app/common/common.h 
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

#Compiler and Linker flags

CFLAGS = -c -march=armv7e-m -mthumb -g3 -mcpu=cortex-m4 -Wall -std=gnu11 $(addprefix -I ,$(INC_DIR)) -ggdb
LDFLAGS = -T S32_BL.ld -g3 -ggdb -Wl,-Map=$(BIN_DIR)/S32_BL.map -nostdlib -mcpu=cortex-m4 -Wall -Werror -Wshadow $(addprefix -L ,$(CC_LIB))

#Target name with path
TARGET = $(ROOT)/build/bin/$(PROJECT)

#Makefile rules to build the project
all: $(TARGET).elf objcopytohex objsize

$(TARGET).elf:$(OBJ)
	@echo Linking: $@
	@$(CC) $(LDFLAGS) $^ -o $@
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Compiling: $@
	@$(CC) $(CFLAGS) $^ -o $@

objsize: 
	@echo Size of output file is:
	@$(OBJSIZE) $(TARGET).elf

objcopytohex:
	@echo Generating .bin file....
	@$(OBJCOPY) -O ihex $(TARGET).elf $(TARGET).hex

objcopytobin:
	@echo Generating .bin file....
	@$(OBJCOPY) -O binary $(TARGET).elf $(TARGET).bin

clean:
	@echo Removing build files
	@rm -rf $(ROOT)/build/bin/* $(OBJ)
	@echo Done...

.PHONY: all clean