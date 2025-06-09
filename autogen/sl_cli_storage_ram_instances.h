#ifndef SL_CLI_STORAGE_RAM_INSTANCES_H
#define SL_CLI_STORAGE_RAM_INSTANCES_H

#include "sl_cli.h"
#include "sl_cli_storage_ram.h"

#ifdef __cplusplus
extern "C" {
#endif

//****************************************************************************
// Global functions

cli_storage_ram_handle_t sl_cli_storage_ram_instances_convert_handle(sl_cli_handle_t cli_handle);
void sl_cli_storage_ram_instances_init(void);

//****************************************************************************

#ifdef __cplusplus
}
#endif

#endif // SL_CLI_STORAGE_RAM_INSTANCES_H