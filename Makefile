
	obj-m := scull_driver.o

	KERN_DIR ?= /usr/src/linux-headers-$(shell uname -r)/
	PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERN_DIR) M=$(PWD) modules

clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.order *.symvers

