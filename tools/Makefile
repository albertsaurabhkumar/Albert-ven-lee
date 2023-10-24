#############################################
##  Processor: S32K144
##  Author: Saurabh Kumar
##  GCC Version: 12.3
##  
##  Makefile for S32K144 Application
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

#Project Name
PROJECT = S32_App

SRC = $(wildcard $(SRC_DIR)/*.c)
INC = $(wildcard $(INC_DIR)/*.h) $(ROOT)/app/common/common.h 
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

#Compiler and Linker flags

CFLAGS = -c -mthumb -g3 -mcpu=cortex-m4 -Wall -std=gnu11 $(addprefix -I ,$(INC_DIR)) -ggdb
LDFLAGS = -T S32_App.ld -g3 -ggdb -Wl,-Map=$(BIN_DIR)/S32_App.map -nostdlib -mcpu=cortex-m4 -Wall -Werror -Wshadow $(addprefix -L ,$(CC_LIB))

#Target name with path
TARGET = $(ROOT)/build/bin/$(PROJECT).elf

#Makefile rules to build the project
all: $(TARGET)

$(TARGET):$(OBJ)
	@echo Linking: $@
	@$(CC) $(LDFLAGS) $^ -o $@
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Compiling: $@
	@$(CC) $(CFLAGS) $^ -o $@

clean:
	@echo Removing build files
	@rm -rf $(TARGET) $(OBJ)
	@echo Done...

.PHONY: all clean