# Copyright (c) 2024 Analog Devices, Inc.
# SPDX-License-Identifier: Apache-2.0

# zephyr-keep-sorted-start
add_subdirectory(temp)
add_subdirectory_ifdef(CONFIG_NPM13XX_CHARGER npm13xx_charger)
add_subdirectory_ifdef(CONFIG_NPM2100_VBAT npm2100_vbat)
add_subdirectory_ifdef(CONFIG_QDEC_NRFX qdec_nrfx)
# zephyr-keep-sorted-stop
