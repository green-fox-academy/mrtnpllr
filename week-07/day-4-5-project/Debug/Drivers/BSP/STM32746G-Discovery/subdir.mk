################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.c \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.c \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.c \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.c \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.c \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.c \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.c \
C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.c 

OBJS += \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.o \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.o \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.o \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.o \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.o \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.o \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.o \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.o \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.o 

C_DEPS += \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.d \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.d \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.d \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.d \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.d \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.d \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.d \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.d \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.o: C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I../Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/" -I"C:/Users/yello/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

