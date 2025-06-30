/*
 * Copyright (c) 2019 Vestas Wind Systems A/S
 * Copyright (c) 2025 National Taiwan University Racing Team
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @defgroup CAN CAN BUS
 * @{
 * @}
 */

/**
 * @brief CANopen Network Stack
 * @defgroup canopen CANopen Network Stack
 * @ingroup CAN
 * @{
 */

#ifndef ZEPHYR_MODULES_CANOPENNODE_CANOPENNODE_H_
#define ZEPHYR_MODULES_CANOPENNODE_CANOPENNODE_H_

#include <stdint.h>

#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>

#include <CANopen.h>
#include <storage/CO_storage.h>
#include "OD.h"

#ifdef __cplusplus
extern "C" {
#endif

/* macro ---------------------------------------------------------------------*/
#define CANOPEN_STORAGE_ENTRY_DEFINE(_group, _idx, _attr)                                          \
	const STRUCT_SECTION_ITERABLE(canopen_storage_entry) = {                                   \
		.key = STRINGIFY(_group), .addr = (void *)&_group, .len = sizeof(_group),          \
				 .subIndexOD = _idx, .attr = _attr,                                \
	}

/* function declaration ------------------------------------------------------*/
int canopen_reset_communication();

int canopen_storage_init(CO_CANmodule_t *module);

int canopen_storage_process();

/**
 * @brief Attach CANopen object dictionary program download handlers.
 *
 * Attach CANopen program download functions to object dictionary
 * indexes 0x1F50, 0x1F51, 0x1F56, and 0x1F57. This function must be
 * called after calling CANopenNode `CO_init()`.
 *
 * @param nmt CANopenNode NMT object
 * @param sdo CANopenNode SDO server object
 * @param em  CANopenNode Emergency object
 */
void canopen_program_download_attach(CO_NMT_t *nmt, CO_SDOserver_t *sdo, CO_EM_t *em);

/**
 * @brief Indicate CANopen program download in progress
 *
 * Indicate that a CANopen program download is in progress.
 *
 * @param in_progress true if program download is in progress, false otherwise
 */
void canopen_leds_program_download(bool in_progress);

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* ZEPHYR_MODULES_CANOPENNODE_CANOPENNODE_H_ */
