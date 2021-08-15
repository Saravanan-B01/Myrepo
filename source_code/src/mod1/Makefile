#1 Simple Makefile  concept.
#default:
#	gcc module.c -o ../../bins/mod1

#2 How to make incremental builds concept
# Its works based on timestamp of source and target filed.
#../../bins/mod1:module.c
#	gcc module.c -o ../../bins/mod1

#3 Further Improving the makefile by using variables.
#OUTPUT = ../../bins/mod1
#OBJS = ../../objs/mod1.o
#INPUT = module.c

#$(OUTPUT):$(OBJS)
#	gcc $(INPUT) -o $(OUTPUT)

#$(OBJS):$(INPUT)
#	gcc -c $(INPUT) -o $(OBJS)

#4 Further improving the makefile by using symbols for dependency-$(^)/$(<) and target-$(@)
#OUTPUT = ../../bins/mod1
#OBJS = ../../objs/mod1.o
#INPUT = module.c

#$(OUTPUT):$(OBJS)
#	gcc $(<) -o $(@)
#$(OBJS):$(INPUT)
#	gcc -c $(<) -o $(@)


#5 Further improving the makefile by using LDFLAGS and CFLAGS
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


#6 Further improving the makefile-6 by extending the definitions.
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

