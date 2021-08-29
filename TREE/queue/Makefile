#make file for shared object creation
TARGET= queue

ifeq ($(LIBQUEUE), 1)
LIBTARGET= lib$(TARGET).so
$(LIBTARGET): queue.c
	gcc -Wall -Werror -fPIC -shared $< -o $@
endif

ifeq ($(OBJQUEUE), 1)
OBJTARGET= $(TARGET).o
$(OBJTARGET):queue.c
	gcc -Wall -Werror -c $< -o $@
endif

clean:
	rm libqueue* queue.o
