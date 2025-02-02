/*
 * s2dps01a01_hw_i2c.h - Platform data for s2dps01a01 backlight driver
 *
 * Copyright (C) 2021 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
#include "../ss_dsi_panel_common.h"

#if defined(CONFIG_PANEL_BUILTIN_BACKLIGHT)
int ss_blic_s2dps01a01_init(void);
int ss_blic_s2dps01a01_configure(u8 data[][2], int size);
#endif

