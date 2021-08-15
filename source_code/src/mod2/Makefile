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


#Further improving the makefile-7 creating shared object
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




#Further improving the makefile-8 creating shared object
MODULE_NAME = main_file

TARGET_DIR = ../../bins
TARGET = $(TARGET_DIR)/$(MODULE_NAME)

LIBS_DIR = ../../libs
LIBS = $(LIBS_DIR)/lib$(MODULE_NAME).so

CFLAGS = -fPIC -Wall -Werror
LDFLAGS = -lm

$(TARGET):$(LIBS)
	gcc test_file.c -L. -l$(MODULE_NAME) -o $(@) 

$(LIBS):$(MODULE_NAME).c
	gcc $(CFLAGS) -shared $(<) -o $(@)

clean:
	rm $(TARGET) $(LIBS)

