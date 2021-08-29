MODULE=tree
MODULE1=tree1
TARGET1= $(MODULE)
TARGET2= $(MODULE1)

CFLAGS = -Werror -Wall -DTREES

$(TARGET1):$(MODULE).c
	gcc $(CFLAGS) $< -I../queue -L../queue -lqueue -o $@

$(TARGET2):$(MODULE).c
	gcc $(CFLAGS) $< ../queue/queue.o -I../queue -o $@

clean:
	rm -rf tree tree1
