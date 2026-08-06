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

#define FC_TARGET_MCU                       STM32H743

#define BOARD_NAME                          FRENH7WINGAIO
#define MANUFACTURER_ID                     FREN

#ifndef USE_WING
#define USE_WING
#endif

#ifndef USE_SERVOS
#define USE_SERVOS
#endif

#define USE_ACC
#define USE_ACC_SPI_ICM42605
#define USE_ACCGYRO_LSM6DSV16X

#define USE_GYRO
#define USE_GYRO_SPI_ICM42605
#define USE_ACCGYRO_LSM6DSV16X

#define GYRO_1_CS_PIN                       PD4
#define GYRO_1_EXTI_PIN                     PC15
#define GYRO_1_SPI_INSTANCE                 SPI1
#define GYRO_1_ALIGN                        CW270_DEG_FLIP

#define GYRO_2_CS_PIN                       PC14
#define GYRO_2_EXTI_PIN                     PB0
#define GYRO_2_SPI_INSTANCE                 SPI2
#define GYRO_2_ALIGN                        CW180_DEG_FLIP

#define USE_BARO
#define USE_BARO_BMP388
#define BARO_I2C_INSTANCE                   I2CDEV_2

#define USE_MAG
#define MAG_I2C_INSTANCE                    I2CDEV_1

#define USE_QUADSPI
#define USE_QUADSPI_DEVICE_1
#define QUADSPI1_SCK_PIN                    PB2
#define QUADSPI1_BK1_IO0_PIN                PD11
#define QUADSPI1_BK1_IO1_PIN                PC10
#define QUADSPI1_BK1_IO2_PIN                PE2
#define QUADSPI1_BK1_IO3_PIN                PD13
#define QUADSPI1_BK1_CS_PIN                 PB6
#define QUADSPI1_MODE                       QUADSPI_MODE_BK1_ONLY
#define QUADSPI1_CS_FLAGS                   QUADSPI_BK1_CS_HARDWARE

#define USE_FLASH
#define USE_FLASH_CHIP
#define USE_FLASHFS
#define USE_FLASH_TOOLS
#define USE_FLASH_SPI
#define USE_FLASH_MT29F
#define FLASH_QUADSPI_INSTANCE              QUADSPI

#define BEEPER_INVERTED
#define BEEPER_PIN                          PC13  // GPIO only; passive buzzers require a timer-capable pin

#define MOTOR1_PIN                          PA8   // S1
#define MOTOR2_PIN                          PA9   // S2

#define SERVO1_PIN                          PA15  // S3
#define SERVO2_PIN                          PA1   // S4
#define SERVO3_PIN                          PA6   // S5
#define SERVO4_PIN                          PB5   // S6
#define SERVO5_PIN                          PC8   // S7
#define SERVO6_PIN                          PC9   // S8
#define SERVO7_PIN                          PD12  // S9
#define SERVO8_PIN                          PB7   // S10

#define LED_STRIP_PIN                       PA0

#define UART1_RX_PIN                        PB15
#define UART1_TX_PIN                        PB14

#define UART2_RX_PIN                        PA3
#define UART2_TX_PIN                        PA2

#define UART3_RX_PIN                        PD9
#define UART3_TX_PIN                        PD8

#define UART5_RX_PIN                        PD2
#define UART5_TX_PIN                        PC12

#define UART6_RX_PIN                        PC7
#define UART6_TX_PIN                        PC6

#define UART8_RX_PIN                        PE0
#define UART8_TX_PIN                        PE1

#define I2C1_SCL_PIN                        PB8
#define I2C1_SDA_PIN                        PB9
#define I2C2_SCL_PIN                        PB10
#define I2C2_SDA_PIN                        PB11

#define LED0_PIN                            PE3
#define LED1_PIN                            PE4

#define SPI1_SCK_PIN                        PA5
#define SPI1_SDI_PIN                        PB4
#define SPI1_SDO_PIN                        PD7
#define SPI2_SCK_PIN                        PD3
#define SPI2_SDI_PIN                        PC2
#define SPI2_SDO_PIN                        PC3

#define ADC_VBAT_PIN                        PC0
#define ADC_CURR_PIN                        PC1
#define ADC_EXTERNAL1_PIN                   PA7

#define PINIO1_PIN                          PB1
#define PINIO2_PIN                          PD10 // CAM SW
#define PINIO3_PIN                          PE9  // VTX SW

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, MOTOR1_PIN,    1,  0) \
    TIMER_PIN_MAP( 1, MOTOR2_PIN,    1,  1) \
    TIMER_PIN_MAP( 2, SERVO1_PIN,    1, -1) \
    TIMER_PIN_MAP( 3, SERVO2_PIN,    1, -1) \
    TIMER_PIN_MAP( 4, SERVO3_PIN,    1, -1) \
    TIMER_PIN_MAP( 5, SERVO4_PIN,    1, -1) \
    TIMER_PIN_MAP( 6, SERVO5_PIN,    1, -1) \
    TIMER_PIN_MAP( 7, SERVO6_PIN,    1, -1) \
    TIMER_PIN_MAP( 8, SERVO7_PIN,    1, -1) \
    TIMER_PIN_MAP( 9, SERVO8_PIN,    2, -1) \
    TIMER_PIN_MAP(10, LED_STRIP_PIN, 2,  2)

#define ADC1_DMA_OPT                        9
#define ADC3_DMA_OPT                        10

#define TIMUP1_DMA_OPT                      11
#define TIMUP2_DMA_OPT                      12
#define TIMUP3_DMA_OPT                      13

#define DEFAULT_BLACKBOX_DEVICE             BLACKBOX_DEVICE_FLASH

#define DEFAULT_CURRENT_METER_SOURCE        CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE        VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SCALE         250
#define DEFAULT_VOLTAGE_METER_SCALE         110

#define BOX_USER1_NAME                      "PINIO 1"
#define PINIO1_BOX                          40
#define PINIO1_CONFIG                       1

#define BOX_USER2_NAME                      "CAM SW"
#define PINIO2_BOX                          41
#define PINIO2_CONFIG                       1

#define BOX_USER3_NAME                      "VTX PWR"
#define PINIO3_BOX                          42
#define PINIO3_CONFIG                       129

#define SERIALRX_PROVIDER                   SERIALRX_CRSF
#define SERIALRX_UART                       SERIAL_PORT_USART6

#define GPS_UART                            SERIAL_PORT_USART3
#define MSP_DISPLAYPORT_UART                SERIAL_PORT_USART8
#define VTX_SMARTAUDIO_UART                 SERIAL_PORT_USART2
