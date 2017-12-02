TARGETS = console-setup alsa-utils mountkernfs.sh resolvconf ufw apparmor pppd-dns plymouth-log x11-common hostname.sh udev keyboard-setup mountdevsubfs.sh procps cryptdisks cryptdisks-early networking hwclock.sh checkroot.sh lvm2 checkfs.sh urandom mountnfs-bootclean.sh mountnfs.sh bootmisc.sh kmod mountall.sh checkroot-bootclean.sh mountall-bootclean.sh
INTERACTIVE = console-setup udev keyboard-setup cryptdisks cryptdisks-early checkroot.sh checkfs.sh
udev: mountkernfs.sh
keyboard-setup: mountkernfs.sh udev
mountdevsubfs.sh: mountkernfs.sh udev
procps: mountkernfs.sh udev
cryptdisks: checkroot.sh cryptdisks-early udev lvm2
cryptdisks-early: checkroot.sh udev
networking: mountkernfs.sh urandom resolvconf procps
hwclock.sh: mountdevsubfs.sh
checkroot.sh: hwclock.sh keyboard-setup mountdevsubfs.sh hostname.sh
lvm2: cryptdisks-early mountdevsubfs.sh udev
checkfs.sh: cryptdisks lvm2 checkroot.sh
urandom: hwclock.sh
mountnfs-bootclean.sh: mountnfs.sh
mountnfs.sh: networking
bootmisc.sh: mountnfs-bootclean.sh mountall-bootclean.sh udev checkroot-bootclean.sh
kmod: checkroot.sh
mountall.sh: checkfs.sh checkroot-bootclean.sh lvm2
checkroot-bootclean.sh: checkroot.sh
mountall-bootclean.sh: mountall.sh
