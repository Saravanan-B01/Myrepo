#7 Creating the makefile for storing libs(.so) and objs(.o)
#MODULE_NAME = main_file

#TARGET_DIR = ../../libs
#TARGET = $(TARGET_DIR)/lib$(MODULE_NAME).so

#OBJS_DIR = ../../objs
#OBJS = $(OBJS_DIR)/$(MODULE_NAME).o

#CFLAGS = -Wall -Werror
#LDFLAGS = -lm

#$(TARGET):$(OBJS)
#	gcc -shared $(<) -o $(@) $(LDFLAGS)

#$(OBJS):$(MODULE_NAME).c
#	gcc $(CFLAGS) -c $(<) -o $(@)

#clean:
#	rm $(TARGET) $(OBJS)




#8 Creating the makefile for creating output binary and libs(.so)
MODULE_NAME = main_file

TARGET_DIR = ../../test_bin
TARGET = $(TARGET_DIR)/$(MODULE_NAME)

LIBS_DIR = ../../libs
LIBS = $(LIBS_DIR)/lib$(MODULE_NAME).so

OBJS_DIR = ../../objs
OBJS = $(OBJS_DIR)/$(MODULE_NAME).o

CFLAGS = -fPIC -Wall -Werror
LDFLAGS = -lm

$(TARGET):$(LIBS)
	gcc test_file.c -L$(LIBS_DIR) -l$(MODULE_NAME) -o $(@) 

$(LIBS):$(OBJS)
	gcc $(CFLAGS) -shared $(<) -o $(@)

$(OBJS):$(MODULE_NAME).c
	gcc -c $(<) -o $(@)

install:
	cp *h ../../share_header

clean:
	rm $(TARGET) $(LIBS) $(OBJS)

