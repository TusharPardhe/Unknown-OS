#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfc5ded98, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4219a6ee, __VMLINUX_SYMBOL_STR(VBoxHost_RTStrPrintf) },
	{ 0x91b2ae06, __VMLINUX_SYMBOL_STR(VBoxHost_RTErrConvertToErrno) },
	{ 0x2f627954, __VMLINUX_SYMBOL_STR(VBoxHost_RTErrConvertFromErrno) },
	{ 0x28879764, __VMLINUX_SYMBOL_STR(VBoxHost_RTLogLoggerEx) },
	{ 0xf6be0b48, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xb20fb994, __VMLINUX_SYMBOL_STR(VBoxHost_RTLogRelGetDefaultInstanceEx) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc340f164, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x32825770, __VMLINUX_SYMBOL_STR(VBoxHost_RTStrToUInt32) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x13782515, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x54256c66, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xcd783f6e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfb89f800, __VMLINUX_SYMBOL_STR(VBoxHost_RTR0Term) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6fc82938, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57d102cb, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xc3aae322, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x1393f98e, __VMLINUX_SYMBOL_STR(VBoxHost_RTR0Init) },
	{ 0xc3e757d6, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x9e273dd8, __VMLINUX_SYMBOL_STR(misc_deregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vboxdrv";


MODULE_INFO(srcversion, "3B529F79361618821A0E936");
