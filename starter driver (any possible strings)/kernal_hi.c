#include <linux/module.h>
#include <linux/init.h>

static int __init ks_init(void)
{
    printk(KERN_INFO "Kernel space says hi.\n");
    return 0;
}

static void __exit ks_exit(void)
{
    printk(KERN_INFO "Kernel space says bye.\n");
}

module_init(ks_init);
module_exit(ks_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A simple kernel module that says hi and bye.");