#include <stdlib.h>
// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
	// ADB stuff
	"/sys/bus/usb",
	"/sys/class/android_usb/android0/f_adb",
	"/sys/class/misc/android_adb",
	"/sys/class/tty/ptmx",
	
	// EMMC stuff
	"/sys/block/mmcblk0",
	"/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
	"/sys/bus/sdio/drivers/bcmsdh_sdmmc",
	"/sys/devices/platform/dw_mmc.0*",
	"/sys/module/mmcblk",
	"/sys/module/mmc_core",
	
	// MicroSD card
	"/sys/block/mmcblk1",
	"/sys/devices/platform/dw_mmc.2*",
NULL
};