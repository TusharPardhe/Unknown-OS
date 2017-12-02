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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xaab5ea4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb3ddc57f, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb8885e4d, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0xe9429273, __VMLINUX_SYMBOL_STR(iommu_attach_device) },
	{ 0x781927c7, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0x4219a6ee, __VMLINUX_SYMBOL_STR(VBoxHost_RTStrPrintf) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x91b2ae06, __VMLINUX_SYMBOL_STR(VBoxHost_RTErrConvertToErrno) },
	{ 0xb47483c7, __VMLINUX_SYMBOL_STR(VBoxHost_RTUuidFromStr) },
	{ 0xa81cf700, __VMLINUX_SYMBOL_STR(VBoxHost_RTMemAllocZTag) },
	{ 0x2f627954, __VMLINUX_SYMBOL_STR(VBoxHost_RTErrConvertFromErrno) },
	{ 0x5eb532dc, __VMLINUX_SYMBOL_STR(iommu_map) },
	{ 0x28879764, __VMLINUX_SYMBOL_STR(VBoxHost_RTLogLoggerEx) },
	{ 0x4ea7b775, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa8046d25, __VMLINUX_SYMBOL_STR(VBoxHost_RTSpinlockDestroy) },
	{ 0xc907879f, __VMLINUX_SYMBOL_STR(VBoxHost_RTUuidCompareStr) },
	{ 0xf3086499, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x42c25d2a, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemFastMutexRequest) },
	{ 0xb20fb994, __VMLINUX_SYMBOL_STR(VBoxHost_RTLogRelGetDefaultInstanceEx) },
	{ 0x5d8f1f93, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2f8c36b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x52071e09, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x9a121646, __VMLINUX_SYMBOL_STR(pci_reset_function) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x662cd8d8, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemFastMutexRelease) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x7a5d8d9f, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xefef48bb, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd126155a, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xfb89f800, __VMLINUX_SYMBOL_STR(VBoxHost_RTR0Term) },
	{ 0x6d18017b, __VMLINUX_SYMBOL_STR(iommu_unmap) },
	{ 0xf094d0f0, __VMLINUX_SYMBOL_STR(iommu_domain_alloc) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa25691ba, __VMLINUX_SYMBOL_STR(iommu_domain_free) },
	{ 0xb63eba23, __VMLINUX_SYMBOL_STR(iommu_detach_device) },
	{ 0x7d5072e, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x7c1e7bad, __VMLINUX_SYMBOL_STR(VBoxHost_RTMemFree) },
	{ 0xa44891bf, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x6f3b3d3c, __VMLINUX_SYMBOL_STR(iommu_present) },
	{ 0x297e1604, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x911864ca, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27f79cd, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe378c7cb, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x78a0b49e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa2a7b126, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xd70dd8dd, __VMLINUX_SYMBOL_STR(find_module) },
	{ 0x504f7493, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemFastMutexDestroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe54f0943, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xac6c1a5f, __VMLINUX_SYMBOL_STR(VBoxHost_RTSemFastMutexCreate) },
	{ 0x41b9a4f, __VMLINUX_SYMBOL_STR(module_mutex) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x83b98025, __VMLINUX_SYMBOL_STR(iommu_iova_to_phys) },
	{ 0x4685b57c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x1393f98e, __VMLINUX_SYMBOL_STR(VBoxHost_RTR0Init) },
	{ 0xd3924907, __VMLINUX_SYMBOL_STR(SUPDrvLinuxIDC) },
	{ 0x55df563b, __VMLINUX_SYMBOL_STR(VBoxHost_RTSpinlockCreate) },
	{ 0x7c583a03, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x1669521c, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x4a7e53e0, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0x783c06c7, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2a0cc729, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xbf882fdd, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vboxdrv";


MODULE_INFO(srcversion, "3B78BC57F16249D1EF8D255");
