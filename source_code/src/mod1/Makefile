#Simple makefile-1
#default:
#	gcc module.c -o ../../bins/mod1

#how to make incremental makefile-2
#../../bins/mod1:module.c
#	gcc module.c -o ../../bins/mod1

#Further improving the makefile-3
#OUTPUT = ../../bins/mod1
#OBJS = ../../objs/mod1.o
#INPUT = module.c

#$(OUTPUT):$(OBJS)
#	gcc $(INPUT) -o $(OUTPUT)

#$(OBJS):$(INPUT)
#	gcc -c $(INPUT) -o $(OBJS)

#Further improving the makefile-4
#OUTPUT = ../../bins/mod1
#OBJS = ../../objs/mod1.o
#INPUT = module.c

#$(OUTPUT):$(OBJS)
#	gcc $(<) -o $(@)
#$(OBJS):$(INPUT)
#	gcc -c $(<) -o $(@)

#Further improving the makefile-5 by using LDFLAGS and CFLAGS
#OUTPUT = ../../bins/mod1
#OBJS = ../../objs/mod1.o
#INPUT = module.c
#CFLAGS = -Wall -Werror
#LDFLAGS = -lm

#$(OUTPUT):$(OBJS)
#	gcc $(<) -o $(@) $(LDFLAGS)

#$(OBJS):$(INPUT)
#	gcc $(CFLAGS) -c $(<) -o $(@)

#clean:
#	rm $(OUTPUT) $(OBJS)


#Further improving the makefile-6 by extending the definition.
MODULE_NAME = module

TARGET_DIR = ../../bins
TARGET = $(TARGET_DIR)/$(MODULE_NAME)

OBJS_DIR = ../../objs
OBJS = $(OBJS_DIR)/$(MODULE_NAME).o

CFLAGS = -Wall -Werror
LDFLAGS = -lm

$(TARGET):$(OBJS)
	gcc $(<) -o $(@) $(LDFLAGS)

$(OBJS):$(MODULE_NAME).c
	gcc $(CFLAGS) -c $(<) -o $(@)

clean:
	rm $(TARGET) $(OBJS)

