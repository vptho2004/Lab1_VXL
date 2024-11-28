################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/exercise1.c \
../Core/Src/exercise10.c \
../Core/Src/exercise2.c \
../Core/Src/exercise3.c \
../Core/Src/exercise4.c \
../Core/Src/exercise5.c \
../Core/Src/exercise6.c \
../Core/Src/exercise7.c \
../Core/Src/exercise8.c \
../Core/Src/exercise9.c \
../Core/Src/main.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c 

OBJS += \
./Core/Src/exercise1.o \
./Core/Src/exercise10.o \
./Core/Src/exercise2.o \
./Core/Src/exercise3.o \
./Core/Src/exercise4.o \
./Core/Src/exercise5.o \
./Core/Src/exercise6.o \
./Core/Src/exercise7.o \
./Core/Src/exercise8.o \
./Core/Src/exercise9.o \
./Core/Src/main.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o 

C_DEPS += \
./Core/Src/exercise1.d \
./Core/Src/exercise10.d \
./Core/Src/exercise2.d \
./Core/Src/exercise3.d \
./Core/Src/exercise4.d \
./Core/Src/exercise5.d \
./Core/Src/exercise6.d \
./Core/Src/exercise7.d \
./Core/Src/exercise8.d \
./Core/Src/exercise9.d \
./Core/Src/main.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

