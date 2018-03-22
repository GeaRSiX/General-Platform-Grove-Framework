########################################
# RN2483 Library Makefile
# author:	alexander collins
# date:		September 2017 - April 2018
########################################
#
# CONSTANTS
#
# system
RM      = rm -f
# compiler
CC      = arm-none-eabi-g++
AR      = ar rcs
# files
TARGET  = grovedrivers.a
DIR_INC = inc/
SOURCES = src/*.cpp
OBJECTS = *.o
# flags
FLAGS   = -I$(DIR_INC)
CFLAGS  = -pedantic -Wall -Wextra

#
# BUILD
#
.PHONY: all
all: $(TARGET) clean

$(TARGET): $(OBJECTS)
	$(AR) $(TARGET) $(OBJECTS)

$(OBJECTS): $(SOURCES)
	$(CC) -c $(SOURCES) $(FLAGS) $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJECTS)

.SILENT: init
init:
	$(RM) inc/config.h

