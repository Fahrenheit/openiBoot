#ifndef HW_CLCD_H
#define HW_CLCD_H

#if !defined(CONFIG_ATV_2G)
#define CLCD 0x89000000
#else
#define CLCD 0x89100000
#endif
#define CLCD_FRAMEBUFFER 0x5F700000

#define VIDCON1_IVCLKSHIFT 3
#define VIDCON1_IHSYNCSHIFT 2
#define VIDCON1_IVSYNCSHIFT 1
#define VIDCON1_IVDENSHIFT 0

#define VIDTCON_BACKPORCHSHIFT 16
#define VIDTCON_BACKPORCHMASK 0xFF
#define VIDTCON_FRONTPORCHSHIFT 8
#define VIDTCON_FRONTPORCHMASK 0xFF
#define VIDTCON_SYNCPULSEWIDTHSHIFT 0
#define VIDTCON_SYNCPULSEWIDTHMASK 0xFF
#define VIDTCON2_LINEVALMASK 0x3FF
#define VIDTCON2_LINEVALSHIFT 0
#define VIDTCON2_HOZVALMASK 0x3FF
#define VIDTCON2_HOZVALSHIFT 16
#if defined(CONFIG_IPHONE_4)
#define DISPLAYID 0
#elif defined(CONFIG_IPAD_1G)
#define DISPLAYID 1
#elif defined(CONFIG_IPOD_TOUCH_4G)
#define DISPLAYID 2
#elif defined(CONFIG_IPOD_TOUCH_2G)
#define DISPLAYID 3
#elif defined(CONFIG_ATV_2G)
#define DISPLAYID 4
#endif

#define LCD_MAX_BACKLIGHT         2047
#define LCD_BACKLIGHT_HIGH_REG    0x66
#define LCD_BACKLIGHT_LOW_REG     0x67
#define LCD_BACKLIGHT_HIGH_SHIFT  3
#define LCD_BACKLIGHT_LOW_MASK    7

#endif
