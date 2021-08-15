MODULE= module4
TEST_MODULE= test_mod4

TARGET_DIR = ../../libs
TARGET = $(TARGET_DIR)/lib$(MODULE).a

OBJS_DIR = ../../objs
OBJS = $(OBJS_DIR)/$(MODULE).o

CFLAGS = -Wall -Werror

$(TARGET):$(OBJS)
	ar rcs $(@) $(^)

$(OBJS):$(MODULE).c
	gcc $(CFLAGS) -c $(<) -o $(@)

test:$(TEST_MODULE).c
	gcc $(<) -L../../libs -l$(MODULE) -o ../../test_bin/module4
