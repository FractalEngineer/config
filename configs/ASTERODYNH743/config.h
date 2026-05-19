/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H743

#define BOARD_NAME        ASTERODYNH743
#define MANUFACTURER_ID   ADYN

#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP388
#define USE_MAX7456
#define USE_MAG

// Gyro 1 - ICM-42688P on SPI2
#define SPI2_SCK_PIN         PD3
#define SPI2_SDI_PIN         PC2
#define SPI2_SDO_PIN         PC3
#define GYRO_1_SPI_INSTANCE  SPI2
#define GYRO_1_CS_PIN        PD5
#define GYRO_1_EXTI_PIN      PC15
#define GYRO_1_ALIGN         CW180_DEG

// Gyro 2 - ICM-42688P on SPI3
#define SPI3_SCK_PIN         PB3
#define SPI3_SDI_PIN         PB4
#define SPI3_SDO_PIN         PD6
#define GYRO_2_SPI_INSTANCE  SPI3
#define GYRO_2_CS_PIN        PA15
#define GYRO_2_EXTI_PIN      PB7
#define GYRO_2_ALIGN         CW270_DEG

#define DEFAULT_GYRO_TO_USE  GYRO_CONFIG_USE_GYRO_BOTH

// OSD - AT7456E on SPI1
#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7
#define MAX7456_SPI_INSTANCE SPI1
#define MAX7456_SPI_CS_PIN   PB12

#define BEEPER_PIN           PD15
#define BEEPER_INVERTED
#define BEEPER_PWM_HZ        2500

// Motors: TIM1 CH1-4, TIM3 CH3-4, TIM4 CH1-2
#define MOTOR1_PIN           PE9
#define MOTOR2_PIN           PE11
#define MOTOR3_PIN           PE13
#define MOTOR4_PIN           PE14
#define MOTOR5_PIN           PB1
#define MOTOR6_PIN           PB0
#define MOTOR7_PIN           PD12
#define MOTOR8_PIN           PD13

#define LED_STRIP_PIN        PD14   // TIM4_CH3

#define CAMERA_CONTROL_PIN   PE5    // TIM15_CH1

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10
#define UART2_TX_PIN         PA2
#define UART2_RX_PIN         PA3
#define UART3_TX_PIN         PD8
#define UART3_RX_PIN         PD9
#define UART4_TX_PIN         PA0
#define UART4_RX_PIN         PA1
#define UART5_TX_PIN         PB6
#define UART5_RX_PIN         PB5
#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7
#define UART7_TX_PIN         PE8
#define UART7_RX_PIN         PE7
#define UART8_TX_PIN         PE1
#define UART8_RX_PIN         PE0

#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9
#define I2C2_SCL_PIN         PB10
#define I2C2_SDA_PIN         PB11

#define LED0_PIN             PE2
#define LED1_PIN             PE3

#define ADC_VBAT_PIN         PC1
#define ADC_VBAT_INSTANCE    ADC1
#define ADC_CURR_PIN         PC0
#define ADC_CURR_INSTANCE    ADC3

#define PINIO1_PIN           PE6
#define PINIO2_PIN           PD4

// MicroSD via SDMMC1
#define USE_SDCARD
#define SDCARD_DETECT_PIN    NONE
#define SDIO_DEVICE          SDIODEV_1
#define SDIO_USE_4BIT        1
#define SDIO_CK_PIN          PC12
#define SDIO_CMD_PIN         PD2
#define SDIO_D0_PIN          PC8
#define SDIO_D1_PIN          PC9
#define SDIO_D2_PIN          PC10
#define SDIO_D3_PIN          PC11

// Timer / DMA: each motor gets a unique DMA stream (0-7=DMA1, 8-15=DMA2)
// M1-M4: TIM1 CH1-4 (PE9/PE11/PE13/PE14, occurrence=1)
// M5-M6: TIM3 CH4/CH3 (PB1/PB0, occurrence=2 to select TIM3 over TIM1_CHxN)
// M7-M8: TIM4 CH1-2 (PD12/PD13, occurrence=1)
// LED:   TIM4_CH3 (PD14), CamCtrl: TIM15_CH1 (PE5, no DMA)
#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PE9,  1,  0) \
    TIMER_PIN_MAP( 1, PE11, 1,  1) \
    TIMER_PIN_MAP( 2, PE13, 1,  2) \
    TIMER_PIN_MAP( 3, PE14, 1,  3) \
    TIMER_PIN_MAP( 4, PB1,  2,  4) \
    TIMER_PIN_MAP( 5, PB0,  2,  5) \
    TIMER_PIN_MAP( 6, PD12, 1,  6) \
    TIMER_PIN_MAP( 7, PD13, 1,  7) \
    TIMER_PIN_MAP( 8, PD14, 1,  8) \
    TIMER_PIN_MAP( 9, PE5,  1, -1)

#define TIMUP1_DMA_OPT        9
#define TIMUP3_DMA_OPT       10
#define TIMUP4_DMA_OPT       11

#define ADC1_DMA_OPT         12
#define ADC3_DMA_OPT         13

#define BARO_I2C_INSTANCE    I2CDEV_2
#define MAG_I2C_INSTANCE     I2CDEV_1

#define DEFAULT_BLACKBOX_DEVICE      BLACKBOX_DEVICE_SDCARD
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE       248
#define DEFAULT_VOLTAGE_METER_DIVIDER     8
#define DEFAULT_CURRENT_METER_SCALE  250
#define DEFAULT_DSHOT_BITBANG        DSHOT_BITBANG_ON

// Factory Default Configuration

#define BOX_USER1_NAME       "VTX SW"
#define PINIO1_BOX           40
#define PINIO1_CONFIG        1

#define BOX_USER2_NAME       "CAM SW"
#define PINIO2_BOX           41
#define PINIO2_CONFIG        1


#define SERIALRX_UART        SERIAL_PORT_USART6
#define GPS_UART             SERIAL_PORT_USART3
#define ESC_SENSOR_UART      SERIAL_PORT_UART7
#define MSP_UART             SERIAL_PORT_UART8
#define MSP_DISPLAYPORT_UART SERIAL_PORT_UART8
#define USE_MSP_DISPLAYPORT_FONT
