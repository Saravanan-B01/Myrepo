MODULE = module5

TARGET_DIR = ../../bins
TARGET = $(TARGET_DIR)/$(MODULE)

OBJS_DIR = ../../objs
OBJS = $(OBJS_DIR)/$(MODULE).o

LIB_HEADER = ../../share_header 

$(TARGET):$(OBJS)
	gcc $(<) -L../../libs -lmain_file -lmodule4 -o $(@)

$(OBJS):$(MODULE).c
	gcc -c $(<) -I$(LIB_HEADER) -o $(@)
