MODULE= module3

TARGET_DIR = ../../bins
TARGET=$(TARGET_DIR)/$(MODULE)

OBJS_DIR = ../../objs
OBJS= $(OBJS_DIR)/$(MODULE).o

HEADER_PATH = ../../share_header
LD_PATH = ../../libs

CFLAGS = -Wall -Werror -I$(HEADER_PATH)
LDFLAGS = -L$(LD_PATH) -lmain_file

$(TARGET):$(OBJS)
	gcc $(<) $(LDFLAGS) -o $(@)

$(OBJS):$(MODULE).c
	gcc $(CFLAGS) -c $(<) -o $(@)

