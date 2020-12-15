#ifndef __USER_CONFIG_H__
#define __USER_CONFIG_H__

#define __version__     "0.2.0"

#define USE_OPTIMIZE_PRINTF
#define WIFI_ENABLE_SOFTAP  true

#define AMP_PULSE_US    200
#define BT_PULSE_MS     100

#define PSMCU_HOST "192.168.8.141"

// Available IO     IO  INIT
#define GPIO0        0  //    (BT_PREVIOUS, FLASH, FOTABTN)
#define GPIO1        1  //    [UART TX]
#define GPIO2        2  //    (LED)
#define GPIO3        3  //    [UART RX]
#define GPIO4        4  //    (VOL_OSC)
#define GPIO5        5  //    (IR)
//                   6
//                   7
//                   8
//                   9
#define GPIO10      10  //    (MUTE)
//                  11
#define GPIO12      12  //    (BT_PLAYPAUSE)
#define GPIO13      13  //    (BT_NEXT)
#define GPIO14      14  //    (VOL_UPDOWN)
#define GPIO15      15  //    (
#define GPIO16      16  //    (

// Mute 
#define MUTE_MUX            PERIPHS_IO_MUX_SD_DATA3_U
#define MUTE_NUM            GPIO10
#define MUTE_FUNC           FUNC_GPIO10

// BTNEXT
#define BTNEXT_MUX             PERIPHS_IO_MUX_MTCK_U
#define BTNEXT_NUM             GPIO13
#define BTNEXT_FUNC            FUNC_GPIO13

// BTPREVIOUS
#define BTPREVIOUS_MUX         PERIPHS_IO_MUX_GPIO0_U
#define BTPREVIOUS_NUM         GPIO0
#define BTPREVIOUS_FUNC        FUNC_GPIO0


// BTPLAYPAUSE
#define BTPLAYPAUSE_MUX         PERIPHS_IO_MUX_MTDI_U
#define BTPLAYPAUSE_NUM         GPIO12
#define BTPLAYPAUSE_FUNC        FUNC_GPIO12

// LED
#define LED_MUX                 PERIPHS_IO_MUX_GPIO2_U    
#define LED_NUM                 GPIO2
#define LED_FUNC                FUNC_GPIO2

// IR
#define IR_MUX                PERIPHS_IO_MUX_GPIO5_U    
#define IR_NUM                GPIO5
#define IR_FUNC                FUNC_GPIO5

// VOL_OSC 
#define VOLOSC_MUX            PERIPHS_IO_MUX_GPIO4_U    
#define VOLOSC_NUM            GPIO4
#define VOLOSC_FUNC            FUNC_GPIO4

// VOL_UPDOWN 
#define VOLUD_MUX            PERIPHS_IO_MUX_MTMS_U
#define VOLUD_NUM            GPIO14
#define VOLUD_FUNC            FUNC_GPIO14


// IR Remote commands
#define IRCMD_POWER         12
#define IRCMD_MUTE          13
#define IRCMD_VOLUP         16
#define IRCMD_VOLDOWN       17
#define IRCMD_BTPLAYPAUSE   23
#define IRCMD_NEXT          32
#define IRCMD_PREVIOUS      33

#endif

/*
#define PERIPHS_IO_MUX_MTDI_U           (PERIPHS_IO_MUX + 0x04)
#define FUNC_GPIO12                     3
#define PERIPHS_IO_MUX_MTCK_U           (PERIPHS_IO_MUX + 0x08)
#define FUNC_GPIO13                     3
#define PERIPHS_IO_MUX_MTMS_U           (PERIPHS_IO_MUX + 0x0C)
#define FUNC_GPIO14                     3
#define PERIPHS_IO_MUX_MTDO_U           (PERIPHS_IO_MUX + 0x10)
#define FUNC_GPIO15                     3
#define FUNC_U0RTS                      4
#define PERIPHS_IO_MUX_U0RXD_U          (PERIPHS_IO_MUX + 0x14)
#define FUNC_GPIO3                      3
#define PERIPHS_IO_MUX_U0TXD_U          (PERIPHS_IO_MUX + 0x18)
#define FUNC_U0TXD                      0
#define FUNC_GPIO1                      3
#define PERIPHS_IO_MUX_SD_CLK_U         (PERIPHS_IO_MUX + 0x1c)
#define FUNC_SDCLK                      0
#define FUNC_SPICLK                     1
#define PERIPHS_IO_MUX_SD_DATA0_U       (PERIPHS_IO_MUX + 0x20)
#define FUNC_SDDATA0                    0
#define FUNC_SPIQ                       1
#define FUNC_U1TXD                      4
#define PERIPHS_IO_MUX_SD_DATA1_U       (PERIPHS_IO_MUX + 0x24)
#define FUNC_SDDATA1                    0
#define FUNC_SPID                       1
#define FUNC_U1RXD                      4
#define FUNC_SDDATA1_U1RXD              7
#define PERIPHS_IO_MUX_SD_DATA2_U       (PERIPHS_IO_MUX + 0x28)
#define FUNC_SDDATA2                    0
#define FUNC_SPIHD                      1
#define FUNC_GPIO9                      3
#define PERIPHS_IO_MUX_SD_DATA3_U       (PERIPHS_IO_MUX + 0x2c)
#define FUNC_SDDATA3                    0
#define FUNC_SPIWP                      1
#define FUNC_GPIO10                     3
#define PERIPHS_IO_MUX_SD_CMD_U         (PERIPHS_IO_MUX + 0x30)
#define FUNC_SDCMD                      0
#define FUNC_SPICS0                     1
#define PERIPHS_IO_MUX_GPIO0_U          (PERIPHS_IO_MUX + 0x34)
#define FUNC_GPIO0                      0
#define PERIPHS_IO_MUX_GPIO2_U          (PERIPHS_IO_MUX + 0x38)
#define FUNC_GPIO2                      0
#define FUNC_U1TXD_BK                   2
#define FUNC_U0TXD_BK                   4
#define PERIPHS_IO_MUX_GPIO4_U          (PERIPHS_IO_MUX + 0x3C)
#define FUNC_GPIO4                      0
#define PERIPHS_IO_MUX_GPIO5_U          (PERIPHS_IO_MUX + 0x40)
#define FUNC_GPIO5                      0
*/
