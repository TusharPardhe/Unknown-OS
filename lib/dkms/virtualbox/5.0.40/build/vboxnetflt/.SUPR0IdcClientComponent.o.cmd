cmd_/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientComponent.o := gcc -Wp,-MD,/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/.SUPR0IdcClientComponent.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/5/include  -I./arch/x86/include -Iarch/x86/include/generated/uapi -Iarch/x86/include/generated  -Iinclude -I./arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -Iubuntu/include  -D__KERNEL__ -fno-pie -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-pie -no-pie -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -fno-delete-null-pointer-checks -Wno-maybe-uninitialized -O2 --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -include /var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/include/VBox/SUPDrvMangling.h -I/var/lib/dkms/virtualbox/5.0.40/build/ -I/var/lib/dkms/virtualbox/5.0.40/build/include -I/var/lib/dkms/virtualbox/5.0.40/build/r0drv/linux -I/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/ -I/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/include -I/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/r0drv/linux -D__KERNEL__ -DMODULE -DRT_OS_LINUX -DIN_RING0 -DIN_RT_R0 -DIN_SUP_R0 -DVBOX -DRT_WITH_VBOX -DVBOX_WITH_HARDENING -Wno-declaration-after-statement -DRT_ARCH_AMD64 -DVBOX_WITH_64_BITS_GUESTS -fno-pie  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(SUPR0IdcClientComponent)"  -D"KBUILD_MODNAME=KBUILD_STR(vboxnetflt)" -c -o /var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/.tmp_SUPR0IdcClientComponent.o /var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientComponent.c

source_/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientComponent.o := /var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientComponent.c

deps_/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientComponent.o := \
  /var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/include/VBox/SUPDrvMangling.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/mangling.h \
  /var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientInternal.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/VBox/types.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/VBox/cdefs.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/cdefs.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/types.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/stdint.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/stdarg.h \
  /usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h \
  /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h \
  include/generated/uapi/linux/version.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/kasan.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  include/uapi/linux/types.h \
  arch/x86/include/uapi/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  arch/x86/include/asm/posix_types.h \
    $(wildcard include/config/x86/32.h) \
  arch/x86/include/uapi/asm/posix_types_64.h \
  include/uapi/asm-generic/posix_types.h \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/assert.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/VBox/sup.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/VBox/err.h \
    $(wildcard include/config/value.h) \
    $(wildcard include/config/mismatch.h) \
    $(wildcard include/config/unknown/value.h) \
    $(wildcard include/config/unknown/node.h) \
    $(wildcard include/config/constructor/com/error.h) \
    $(wildcard include/config/constructor/ipe.h) \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/err.h \
    $(wildcard include/config/size.h) \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/cpuset.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/mp.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/asm.h \
  /var/lib/dkms/virtualbox/5.0.40/build/include/iprt/asm-amd64-x86.h \
  /var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPDrvIDC.h \

/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientComponent.o: $(deps_/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientComponent.o)

$(deps_/var/lib/dkms/virtualbox/5.0.40/build/vboxnetflt/SUPR0IdcClientComponent.o):
