/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * Copyright (C) 2022 ZyCromerZ
 *
 * Inspired from lyb taskmmu
 *
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <misc/zyc_taskmmu.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ZyCromerZ");
MODULE_DESCRIPTION("zyc taskmmu");
MODULE_VERSION("0.0.1");

bool sultan_pid_map = false;
module_param(sultan_pid_map, bool, 0644);

bool sultan_pid_shrink = false;
module_param(sultan_pid_shrink, bool, 0644);

bool sultan_tid_map = false;
module_param(sultan_tid_map, bool, 0644);

static int __init prepare_driver_init(void) {
 printk(KERN_INFO "zyc taskmmu initialized");
 sultan_pid_map = false;
 sultan_pid_shrink = false;
 sultan_tid_map = false;
 return 0;
}
static void __exit prepare_driver_exit(void) {
 printk(KERN_INFO "zyc taskmmu exit");
}

module_init(prepare_driver_init);
module_exit(prepare_driver_exit);
