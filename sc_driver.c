#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_AUTHOR("Ngwa Sedrick Meh");
int load_driver(void)
{
    printk(KERN_INFO "driver loaded\n");
    return 0;
}
void unload_driver(void)
{
    printk(KERN_INFO "driver unloaded\n");
}
module_init(load_driver);
module_exit(unload_driver);
