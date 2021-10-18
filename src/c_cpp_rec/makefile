#--------------------------------------------------------------------------------
ARDUINO_DIR=$(HOME)/arduino/1.8.16
ARDMK_DIR=../sudar/Arduino-Makefile
#AVR_TOOLS_DIR=/usr
AVR_TOOLS_DIR=$(HOME)/arduino/1.8.16/hardware/tools/avr
BOARD_TAG=uno
#--------------------------------------------------------------------------------
MONITOR_PORT    = /dev/ttyACM0
SRCDIR          = ./src
LOCAL_C_SRCS   ?= $(shell find $(SRCDIR) -name '*.c')
LOCAL_CPP_SRCS ?= $(shell find $(SRCDIR) -name '*.cpp')
LOCAL_CC_SRCS  ?= $(shell find $(SRCDIR) -name '*.cc')
LOCAL_PDE_SRCS ?= $(wildcard $(SRCDIR)/*.pde)
LOCAL_INO_SRCS ?= $(wildcard $(SRCDIR)/*.ino)
LOCAL_AS_SRCS  ?= $(wildcard $(SRCDIR)/*.S)
#--------------------------------------------------------------------------------
include $(ARDMK_DIR)/Arduino.mk



