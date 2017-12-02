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
	{ 0x25318102, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91b2ae06, __VMLINUX_SYMBOL_STR(VBoxHost_RTErrConvertToErrno) },
	{ 0xb47483c7, __VMLINUX_SYMBOL_STR(VBoxHost_RTUuidFromStr) },
	{ 0xa81cf700, __VMLINUX_SYMBOL_STR(VBoxHost_RTMemAllocZTag) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x2f627954, __VMLINUX_SYMBOL_STR(VBoxHost_RTErrConvertFromErrno) },
	{ 0x28879764, __VMLINUX_SYMBOL_STR(VBoxHost_RTLogLoggerEx) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x5ff7dd15, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xbbc2562a, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x10c3c00a, __VMLINUX_SYMBOL_STR(VBoxHost_RTNetIPv6PseudoChecksumEx) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf6be0b48, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xa8046d25, __VMLINUX_SYMBOL_STR(VBoxHost_RTSpinlockDestroy) },
	{ 0xc907879f, __VMLINUX_SYMBOL_STR(VBoxHost_RTUuidCompareStr) },
	{ 0x704ab751, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemEventCreate) },
	{ 0x42c25d2a, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemFastMutexRequest) },
	{ 0xb20fb994, __VMLINUX_SYMBOL_STR(VBoxHost_RTLogRelGetDefaultInstanceEx) },
	{ 0x5b04278c, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemEventSignal) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x98675353, __VMLINUX_SYMBOL_STR(VBoxHost_RTMemAllocTag) },
	{ 0x3521dde2, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemEventWait) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4246cf1c, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x19a8835d, __VMLINUX_SYMBOL_STR(VBoxHost_RTNetIPv4PseudoChecksum) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xdf265689, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x27cf00fb, __VMLINUX_SYMBOL_STR(VBoxHost_RTNetIPv4FinalizeChecksum) },
	{ 0xa31f2025, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x9bdb98f0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x662cd8d8, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemFastMutexRelease) },
	{ 0xbddbe6bf, __VMLINUX_SYMBOL_STR(VBoxHost_RTSpinlockAcquire) },
	{ 0x84af42da, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfb89f800, __VMLINUX_SYMBOL_STR(VBoxHost_RTR0Term) },
	{ 0xb5301868, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x7c1e7bad, __VMLINUX_SYMBOL_STR(VBoxHost_RTMemFree) },
	{ 0xa44891bf, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc0ec5f5f, __VMLINUX_SYMBOL_STR(VBoxHost_RTTimeNanoTS) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa69ff866, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x67bf7640, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemEventDestroy) },
	{ 0x376a4424, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x49dddb40, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x873bf12f, __VMLINUX_SYMBOL_STR(VBoxHost_RTThreadPreemptIsEnabled) },
	{ 0xc3cf472a, __VMLINUX_SYMBOL_STR(VBoxHost_RTSpinlockRelease) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x504f7493, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemFastMutexDestroy) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x8eb0ea36, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xac6c1a5f, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemFastMutexCreate) },
	{ 0x1393f98e, __VMLINUX_SYMBOL_STR(VBoxHost_RTR0Init) },
	{ 0x4a9fbd5b, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xd3924907, __VMLINUX_SYMBOL_STR(SUPDrvLinuxIDC) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc3e757d6, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x55df563b, __VMLINUX_SYMBOL_STR(VBoxHost_RTSpinlockCreate) },
	{ 0x87c9397f, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x9bcd4051, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3a35507f, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x783c06c7, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xbb729c83, __VMLINUX_SYMBOL_STR(VBoxHost_RTNetIPv4HdrChecksum) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vboxdrv";


MODULE_INFO(srcversion, "4491EAF91B9DD340804634F");
