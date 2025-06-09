################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include simplicity_sdk_2024.12.1/util/third_party/printf/src/subdir.mk
-include simplicity_sdk_2024.12.1/util/third_party/printf/subdir.mk
-include simplicity_sdk_2024.12.1/util/silicon_labs/silabs_core/response_print/subdir.mk
-include simplicity_sdk_2024.12.1/util/silicon_labs/silabs_core/queue/subdir.mk
-include simplicity_sdk_2024.12.1/util/silicon_labs/silabs_core/memory_manager/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/udelay/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/system/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/power_manager/src/sleep_loop/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/power_manager/src/common/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/mpu/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/memory_manager/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/iostream/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/interrupt_manager/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/device_manager/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/device_manager/devices/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/device_manager/clocks/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/device_init/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/clock_manager/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/cli_storage/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/cli/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_rssi/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_rf_path/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_pti/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_protocol/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_power_manager_init/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_ieee802154/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_dma/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_ant_div/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/pa-conversions/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/pa-auto-mode/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/hal/efr32/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/subdir.mk
-include simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railapp/subdir.mk
-include simplicity_sdk_2024.12.1/platform/peripheral/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/emlib/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/emdrv/gpiointerrupt/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/emdrv/dmadrv/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/driver/gpio/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/driver/debug/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/common/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/Device/SiliconLabs/EFR32BG22/Source/subdir.mk
-include simplicity_sdk_2024.12.1/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/subdir.mk
-include simplicity_sdk_2024.12.1/hardware/driver/configuration_over_swo/src/subdir.mk
-include simplicity_sdk_2024.12.1/hardware/board/src/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Smart_Blind_Stick_Project
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: Smart_Blind_Stick_Project.axf

# Tool invocations
Smart_Blind_Stick_Project.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -T "C:\Users\kunal\SimplicityStudio\v6_workspace\Smart_Blind_Stick_Project\autogen\linkerfile.ld" -fno-lto -Wl,--no-warn-rwx-segments -Xlinker --gc-sections -Xlinker -Map="Smart_Blind_Stick_Project.map" -mfpu=fpv5-sp-d16 -mfloat-abi=hard --specs=nano.specs -o Smart_Blind_Stick_Project.axf -Wl,--start-group "./app.o" "./main.o" "./autogen/rail_config.o" "./autogen/sl_board_default_init.o" "./autogen/sl_cli_command_table.o" "./autogen/sl_cli_instances.o" "./autogen/sl_cli_storage_ram_instances.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_iostream_handles.o" "./autogen/sl_iostream_init_eusart_instances.o" "./autogen/sl_power_manager_handler.o" "./autogen/sl_rail_util_callbacks.o" "./autogen/sl_rail_util_ieee802154_phy_select.o" "./autogen/sl_rail_util_ieee802154_stack_event.o" "./autogen/sl_rail_util_init.o" "./autogen/sli_cli_hooks.o" "./simplicity_sdk_2024.12.1/hardware/board/src/sl_board_control_gpio.o" "./simplicity_sdk_2024.12.1/hardware/board/src/sl_board_init.o" "./simplicity_sdk_2024.12.1/hardware/driver/configuration_over_swo/src/sl_cos.o" "./simplicity_sdk_2024.12.1/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/sl_mx25_flash_shutdown.o" "./simplicity_sdk_2024.12.1/platform/Device/SiliconLabs/EFR32BG22/Source/startup_efr32bg22.o" "./simplicity_sdk_2024.12.1/platform/Device/SiliconLabs/EFR32BG22/Source/system_efr32bg22.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_assert.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_core_cortexm.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_slist.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_string.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_syscalls.o" "./simplicity_sdk_2024.12.1/platform/driver/debug/src/sl_debug_swo.o" "./simplicity_sdk_2024.12.1/platform/driver/gpio/src/sl_gpio.o" "./simplicity_sdk_2024.12.1/platform/emdrv/dmadrv/src/dmadrv.o" "./simplicity_sdk_2024.12.1/platform/emdrv/gpiointerrupt/src/gpiointerrupt.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_burtc.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_cmu.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_core.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_emu.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_eusart.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_gpio.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_iadc.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_ldma.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_msc.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_prs.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_rmu.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_rtcc.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_system.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_timer.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_usart.o" "./simplicity_sdk_2024.12.1/platform/peripheral/src/sl_hal_gpio.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railapp/railapp_antenna.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railapp/railapp_malloc.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railapp/railapp_rmr.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/154_rx_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/address_filter_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/autoack_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/ble_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/channel_hopping_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/debug_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/error_rate_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/gpio_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/info_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/lbt_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/mfm_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/packet_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/parameter_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/radio_config_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/script_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/timer_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/trx_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/wmbus_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_ci/zwave_ci.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_hal.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_main.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_modes.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/app_trx.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/mode_helpers.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/apps/railtest/railtest_helpers.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/hal/efr32/hal_efr.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/pa-auto-mode/pa_auto_mode.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/pa-conversions/pa_conversions_efr32.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/pa-conversions/pa_curves_efr32.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_ant_div/sl_rail_util_ant_div.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_dma/sl_rail_util_dma.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_ieee802154/sl_rail_util_ieee802154_rail_event.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_power_manager_init/sl_rail_util_power_manager_init.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_protocol/sl_rail_util_protocol.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_pti/sl_rail_util_pti.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_rf_path/sl_rail_util_rf_path.o" "./simplicity_sdk_2024.12.1/platform/radio/rail_lib/plugin/rail_util_rssi/sl_rail_util_rssi.o" "./simplicity_sdk_2024.12.1/platform/service/cli/src/sl_cli.o" "./simplicity_sdk_2024.12.1/platform/service/cli/src/sl_cli_arguments.o" "./simplicity_sdk_2024.12.1/platform/service/cli/src/sl_cli_command.o" "./simplicity_sdk_2024.12.1/platform/service/cli/src/sl_cli_delay.o" "./simplicity_sdk_2024.12.1/platform/service/cli/src/sl_cli_input.o" "./simplicity_sdk_2024.12.1/platform/service/cli/src/sl_cli_io.o" "./simplicity_sdk_2024.12.1/platform/service/cli/src/sl_cli_tokenize.o" "./simplicity_sdk_2024.12.1/platform/service/cli_storage/src/sl_cli_storage_ram.o" "./simplicity_sdk_2024.12.1/platform/service/clock_manager/src/sl_clock_manager.o" "./simplicity_sdk_2024.12.1/platform/service/clock_manager/src/sl_clock_manager_hal_s2.o" "./simplicity_sdk_2024.12.1/platform/service/device_init/src/sl_device_init_dcdc_s2.o" "./simplicity_sdk_2024.12.1/platform/service/device_init/src/sl_device_init_hfxo_s2.o" "./simplicity_sdk_2024.12.1/platform/service/device_init/src/sl_device_init_lfxo_s2.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/clocks/sl_device_clock_efr32xg22.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/devices/sl_device_peripheral_hal_efr32xg22.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/src/sl_device_clock.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/src/sl_device_gpio.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/src/sl_device_peripheral.o" "./simplicity_sdk_2024.12.1/platform/service/interrupt_manager/src/sl_interrupt_manager_cortexm.o" "./simplicity_sdk_2024.12.1/platform/service/iostream/src/sl_iostream.o" "./simplicity_sdk_2024.12.1/platform/service/iostream/src/sl_iostream_eusart.o" "./simplicity_sdk_2024.12.1/platform/service/iostream/src/sl_iostream_retarget_stdio.o" "./simplicity_sdk_2024.12.1/platform/service/iostream/src/sl_iostream_uart.o" "./simplicity_sdk_2024.12.1/platform/service/memory_manager/src/sl_memory_manager_region.o" "./simplicity_sdk_2024.12.1/platform/service/mpu/src/sl_mpu.o" "./simplicity_sdk_2024.12.1/platform/service/power_manager/src/common/sl_power_manager_common.o" "./simplicity_sdk_2024.12.1/platform/service/power_manager/src/common/sl_power_manager_em4.o" "./simplicity_sdk_2024.12.1/platform/service/power_manager/src/sleep_loop/sl_power_manager.o" "./simplicity_sdk_2024.12.1/platform/service/power_manager/src/sleep_loop/sl_power_manager_debug.o" "./simplicity_sdk_2024.12.1/platform/service/power_manager/src/sleep_loop/sl_power_manager_hal_s2.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_burtc.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_prortc.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtcc.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_timer.o" "./simplicity_sdk_2024.12.1/platform/service/system/src/sl_system_init.o" "./simplicity_sdk_2024.12.1/platform/service/system/src/sl_system_process_action.o" "./simplicity_sdk_2024.12.1/platform/service/udelay/src/sl_udelay.o" "./simplicity_sdk_2024.12.1/platform/service/udelay/src/sl_udelay_armv6m_gcc.o" "./simplicity_sdk_2024.12.1/util/silicon_labs/silabs_core/memory_manager/buffer_pool_allocator.o" "./simplicity_sdk_2024.12.1/util/silicon_labs/silabs_core/queue/circular_queue.o" "./simplicity_sdk_2024.12.1/util/silicon_labs/silabs_core/response_print/response_print.o" "./simplicity_sdk_2024.12.1/util/third_party/printf/printf.o" "./simplicity_sdk_2024.12.1/util/third_party/printf/src/iostream_printf.o" "C:\Users\kunal\SimplicityStudio\v6_workspace\Smart_Blind_Stick_Project\simplicity_sdk_2024.12.1\platform\radio\rail_lib\autogen\librail_release\librail_efr32xg22_gcc_release.a" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building out file: Smart_Blind_Stick_Project.out'
	arm-none-eabi-objcopy "Smart_Blind_Stick_Project.axf" "Smart_Blind_Stick_Project.out"
	@echo ' '

	@echo 'Building hex file: Smart_Blind_Stick_Project.hex'
	arm-none-eabi-objcopy -O ihex "Smart_Blind_Stick_Project.axf" "Smart_Blind_Stick_Project.hex"
	@echo ' '

	@echo 'Building bin file: Smart_Blind_Stick_Project.bin'
	arm-none-eabi-objcopy -O binary "Smart_Blind_Stick_Project.axf" "Smart_Blind_Stick_Project.bin"
	@echo ' '

	@echo 'Building s37 file: Smart_Blind_Stick_Project.s37'
	arm-none-eabi-objcopy -O srec "Smart_Blind_Stick_Project.axf" "Smart_Blind_Stick_Project.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "Smart_Blind_Stick_Project.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) Smart_Blind_Stick_Project.axf
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
