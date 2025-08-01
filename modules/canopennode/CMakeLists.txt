# SPDX-License-Identifier: Apache-2.0

if(CONFIG_CANOPENNODE)

  set(CANOPENNODE_DIR ${ZEPHYR_CURRENT_MODULE_DIR})

  zephyr_library()

  zephyr_include_directories(
    ${CANOPENNODE_DIR}
    .
  )

  zephyr_library_sources(
    ${CANOPENNODE_DIR}/CANopen.c
    ${CANOPENNODE_DIR}/301/CO_Emergency.c
    ${CANOPENNODE_DIR}/301/CO_fifo.c
    ${CANOPENNODE_DIR}/301/CO_HBconsumer.c
    ${CANOPENNODE_DIR}/301/CO_NMT_Heartbeat.c
    ${CANOPENNODE_DIR}/301/CO_Node_Guarding.c
    ${CANOPENNODE_DIR}/301/CO_ODinterface.c
    ${CANOPENNODE_DIR}/301/CO_PDO.c
    ${CANOPENNODE_DIR}/301/CO_SDOclient.c
    ${CANOPENNODE_DIR}/301/CO_SDOserver.c
    ${CANOPENNODE_DIR}/301/CO_SYNC.c
    ${CANOPENNODE_DIR}/301/CO_TIME.c
    ${CANOPENNODE_DIR}/301/crc16-ccitt.c
    ${CANOPENNODE_DIR}/303/CO_LEDs.c
    ${CANOPENNODE_DIR}/304/CO_GFC.c
    ${CANOPENNODE_DIR}/304/CO_SRDO.c
    ${CANOPENNODE_DIR}/305/CO_LSSmaster.c
    ${CANOPENNODE_DIR}/305/CO_LSSslave.c
    ${CANOPENNODE_DIR}/309/CO_gateway_ascii.c
    ${CANOPENNODE_DIR}/extra/CO_trace.c
    ${CANOPENNODE_DIR}/storage/CO_storage.c
    CO_driver.c
    canopennode.c
  )

  zephyr_library_sources_ifdef(CONFIG_CANOPENNODE_TIME
    canopen_time.c
  )

  zephyr_library_sources_ifdef(CONFIG_CANOPENNODE_STORAGE
    canopen_storage.c
  )

  zephyr_library_sources_ifdef(CONFIG_CANOPENNODE_PROGRAM_DOWNLOAD
    canopen_program.c
  )
  
  zephyr_linker_sources(SECTIONS
    iterable_sections.ld
  )

endif()
