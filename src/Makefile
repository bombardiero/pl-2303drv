# Current directory 
PWD = $(shell pwd)
obj-m += modulek.o
EXTRA_CFLAGS += -gdwarf-2 
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
