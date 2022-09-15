################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../myLibrary/Src/SevenSegment3x7.c 

OBJS += \
./myLibrary/Src/SevenSegment3x7.o 

C_DEPS += \
./myLibrary/Src/SevenSegment3x7.d 


# Each subdirectory must supply rules for building sources it contributes
myLibrary/Src/%.o myLibrary/Src/%.su: ../myLibrary/Src/%.c myLibrary/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F030x8 -c -I../Core/Inc -I"C:/Users/MacbookAir/Desktop/25.08/ad/myLibrary/Inc" -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-myLibrary-2f-Src

clean-myLibrary-2f-Src:
	-$(RM) ./myLibrary/Src/SevenSegment3x7.d ./myLibrary/Src/SevenSegment3x7.o ./myLibrary/Src/SevenSegment3x7.su

.PHONY: clean-myLibrary-2f-Src

