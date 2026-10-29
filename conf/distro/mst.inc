DISTRO = "mst"
DISTRO_NAME = "MST Distribution"
DISTRO_VERSION ?= "1.0"
DISTRO_CODENAME = "scarthgap"

INIT_MANAGER = "systemd"

TCLIBCAPPEND = ""

DISTRO_FEATURES = " alsa        \ 
                    bluetooth   \
                    debuginfod  \
                    ext2        \
                    ipv4        \
                    ipv6        \
                    systemd     \
                    usrmerge    \
                    tpm2        \
                    usbgadget   \
                    usbhost     \
                    wifi        \
                    pci         \
                    multiarch   \
                    vfat        \
                    xattr       \
                    seccomp     \
                 "

DISTRO_EXTRA_RDEPENDS = " packagegroup-core-boot "
DISTRO_EXTRA_RRECOMMENDS = " kernel-module-af-packet "

INHERIT += "uninative poky-sanity image-buildinfo buildhistory create-spdx "
BUILDHISTORY_COMMIT = "1"

require conf/distro/include/yocto-uninative.inc
