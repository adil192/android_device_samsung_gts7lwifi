// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2020 The LineageOS Project

#ifndef SAMSUNG_FINGERPRINT_INSCREEN_H
#define SAMSUNG_FINGERPRINT_INSCREEN_H

#define FOD_SENSOR_X        550
#define FOD_SENSOR_Y        1900
#define FOD_SENSOR_SIZE     300

#define FOD_ENABLE          "fod_enable,1,1"
#define FOD_DISABLE         "fod_enable,0"

#define FOD_SET_RECT        "set_fod_rect,550,1900,880,2200"

#define FINGERPRINT_ACQUIRED_VENDOR 6
#define VENDORCODE_FINGER_DOWN 9002
#define VENDORCODE_FINGER_UP 9001

#define TSP_CMD_PATH "/sys/class/sec/tsp/cmd"

#endif  // SAMSUNG_FINGERPRINT_INSCREEN_H
