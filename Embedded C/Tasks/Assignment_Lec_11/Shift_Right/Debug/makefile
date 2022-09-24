################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Shift_Right.lss \

FLASH_IMAGE += \
Shift_Right.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Shift_Right.elf secondary-outputs

# Tool invocations
Shift_Right.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Shift_Right.map -mmcu=atmega32 -o "Shift_Right.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Shift_Right.lss: Shift_Right.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Shift_Right.elf  >"Shift_Right.lss"
	@echo 'Finished building: $@'
	@echo ' '

Shift_Right.hex: Shift_Right.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Shift_Right.elf  "Shift_Right.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Shift_Right.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Shift_Right.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Shift_Right.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
