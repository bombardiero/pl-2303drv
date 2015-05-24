#define __KERNEL__

#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/usb.h>

int hello_int = 5;
int hello_uint;
void hello_func2(void)
{
printk (KERN_ALERT "Hello World strated :-]\n");
}
int init_module(void)
{
       //struct urb *urb, gfp_t mem_flags
    //usb_submit_urb(NULL, 0);
    hello_func2();
    printk(KERN_INFO "Hello world 1.\n");
    /*
     * A non 0 return means init_module failed; module can't be loaded.
     */
    return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world 1.\n");
}
