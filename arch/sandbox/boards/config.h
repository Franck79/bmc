#ifndef _CONFIG_H
#define _CONFIG_H

#include <chassis.h>

/* Chassis capabilities */

#define CONFIG_CHASSIS_CAP_FLAG	(PROVIDES_INTRUSION_SENSOR  \
				 /* | PROVIDES_FRONT_PANEL_LOCKOUT \
				 | PROVIDES_DIAGNOSTIC_INTERRUPT \
				 | PROVIDES_POWER_INTERLOCK */)

#define CONFIG_CHASSIS_FRU_DEV_ADDR	0x10
#define CONFIG_CHASSIS_SDR_DEV_ADDR	0x11
#define CONFIG_CHASSIS_SEL_DEV_ADDR	0x12
#define CONFIG_CHASSIS_SYS_MAN_DEV_ADDR	0x12
#define CONFIG_BRIDGE_DEV_ADDR		0x20

#define CONFIG_MINUTES_PER_COUNT	10

#endif
