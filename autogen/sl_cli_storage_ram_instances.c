#include "sl_cli_handles.h"
#include "sl_cli_storage_ram_instances.h"

#include "sl_cli_storage_ram_config_inst0.h"


//****************************************************************************
// Variables

// The default handle is used for cli commands that do not specify instances.
static cli_storage_ram_handle_t default_handle = NULL;

// Instance variables for inst0
static cli_storage_ram_t inst0_instance;
static char inst0_ram_buffer[SL_CLI_STORAGE_RAM_INST0_LINES][SL_CLI_INPUT_BUFFER_SIZE];


//****************************************************************************
// Global functions

cli_storage_ram_handle_t sl_cli_storage_ram_instances_convert_handle(sl_cli_handle_t cli_handle)
{
  
  if (inst0_instance.cli_handle == cli_handle) {
    return &inst0_instance;
  }
  
  return default_handle;
}

void sl_cli_storage_ram_instances_init(void)
{
  // Initialize inst0
  default_handle = &inst0_instance;
  inst0_instance.cli_handle           = SL_CLI_STORAGE_RAM_INST0_CLI_HANDLE;
  inst0_instance.ram_size             = SL_CLI_STORAGE_RAM_INST0_LINES;
  inst0_instance.ram_buffer           = (char *)inst0_ram_buffer;
  inst0_instance.end_string           = SL_CLI_STORAGE_RAM_INST0_END_STRING;
  inst0_instance.prompt               = SL_CLI_STORAGE_RAM_INST0_PROMPT;
  inst0_instance.execute_while_define = SL_CLI_STORAGE_RAM_INST0_EXECUTE;
  // Initialize the instance.
  sl_cli_storage_ram_init(&inst0_instance);
  
}
