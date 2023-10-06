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
SEVEN_COUNT.lss \

FLASH_IMAGE += \
SEVEN_COUNT.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: SEVEN_COUNT.elf secondary-outputs

# Tool invocations
SEVEN_COUNT.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SEVEN_COUNT.map -mmcu=atmega32 -o "SEVEN_COUNT.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SEVEN_COUNT.lss: SEVEN_COUNT.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SEVEN_COUNT.elf  >"SEVEN_COUNT.lss"
	@echo 'Finished building: $@'
	@echo ' '

SEVEN_COUNT.hex: SEVEN_COUNT.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SEVEN_COUNT.elf  "SEVEN_COUNT.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SEVEN_COUNT.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 SEVEN_COUNT.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SEVEN_COUNT.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
