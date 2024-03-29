/**
* @file    Port_Cfg.c
*
* @version 1.0.3
* @brief   AUTOSAR Port - PORT driver configuration.
* @details This file contains the PORT driver precompile configuration.
*
* @addtogroup  Port
* @{
*/
/*=================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : PORT_CI
*   Dependencies         : none
*
*   Autosar Version      : 4.3.1
*   Autosar Revision     : ASR_REL_4_3_REV_0001
*   Autosar Conf.Variant :
*   SW Version           : 1.0.3
*   Build Version        : S32K1XX_MCAL_1_0_3_RTM_ASR_REL_4_3_REV_0001_28-Jan-22
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2022 NXP
*   All Rights Reserved.
=================================================================================================*/
/*=================================================================================================
=================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section PORT_CFG_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before "#include"
* MemMap.h is included after each section define in order to set the current memory section as defined by AUTOSAR.
*
* @section PORT_CFG_REF_2
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the
* contents of a header being included twice.
* This violation is not fixed since the inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section PORT_CFG_REF_3
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that
* 31 character signifiance and case sensitivity are supported for external identifiers.
* The used compilers/linkers allow more than 31 characters significance for external identifiers.
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely
* on the significance of more than 31 characters. The used compilers use more than 31 chars for
* identifiers.
*/

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Port.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
/**
* @brief        Parameters that shall be published within the Port driver header file and also in the
*               module's description file
* @details      The integration of incompatible files shall be avoided.
*
*/
#define PORT_VENDOR_ID_CFG_C                       43
/** @violates @ref PORT_CFG_REF_3 The used compilers use more than 31 chars for identifiers. */
#define PORT_AR_RELEASE_MAJOR_VERSION_CFG_C        4
/** @violates @ref PORT_CFG_REF_3 The used compilers use more than 31 chars for identifiers. */
#define PORT_AR_RELEASE_MINOR_VERSION_CFG_C        3
/** @violates @ref PORT_CFG_REF_3 The used compilers use more than 31 chars for identifiers. */
#define PORT_AR_RELEASE_REVISION_VERSION_CFG_C     1
#define PORT_SW_MAJOR_VERSION_CFG_C                1
#define PORT_SW_MINOR_VERSION_CFG_C                0
#define PORT_SW_PATCH_VERSION_CFG_C                3

/*=================================================================================================
                                      FILE VERSION CHECKS
=================================================================================================*/
/* Check if Port_Cfg.c and Port.h are of the same vendor */
#if (PORT_VENDOR_ID_CFG_C != PORT_VENDOR_ID)
    #error "Port_Cfg.c and Port.h have different vendor ids"
#endif

/* Check if Port_Cfg.c and Port.h file are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_CFG_C != PORT_AR_RELEASE_MAJOR_VERSION)     || \
     (PORT_AR_RELEASE_MINOR_VERSION_CFG_C != PORT_AR_RELEASE_MINOR_VERSION)     || \
     (PORT_AR_RELEASE_REVISION_VERSION_CFG_C != PORT_AR_RELEASE_REVISION_VERSION)  \
    )
   #error "AutoSar Version Numbers of Port_Cfg.c and Port.h are different"
#endif

/* Check if Port_Cfg.c and Port.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_CFG_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_CFG_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_CFG_C != PORT_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Port_Cfg.c and Port.h are different"
#endif

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

#define PORT_START_SEC_CONST_16
/** @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before "#include". */
/** @violates @ref PORT_CFG_REF_2 Precautions to prevent the contents of a header file being included twice. */
#include "Port_MemMap.h"

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief Port Pin description data
*/
CONST (uint16, PORT_CONST) Port_au16PinDescription[8][9] =
{
            

/*  Mode PORT_ALT0_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT0_ADC0_SE0_CMP0_IN0 |
PORT1_ADC0_SE1_CMP0_IN1 |
PORT2_DISABLED |
PORT3_DISABLED |
PORT4_DISABLED |
PORT5_DISABLED |
PORT7_ADC0_SE3 |
PORT10_DISABLED |
PORT11_DISABLED |
PORT12_DISABLED |
PORT13_DISABLED */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(10) |
            SHL_PAD_U16(11) |
            SHL_PAD_U16(12) |
            SHL_PAD_U16(13)
          ),
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT32_ADC0_SE4 |
PORT33_ADC0_SE5 |
PORT34_ADC0_SE6 |
PORT35_ADC0_SE7 |
PORT36_DISABLED |
PORT37_DISABLED |
PORT38_XTAL |
PORT39_EXTAL |
PORT45_DISABLED */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(6) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(13)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT65_ADC0_SE9 |
PORT66_ADC0_SE10_CMP0_IN5 |
PORT67_ADC0_SE11_CMP0_IN4 |
PORT68_CMP0_IN2 |
PORT69_DISABLED |
PORT70_DISABLED |
PORT71_DISABLED |
PORT72_DISABLED |
PORT73_DISABLED |
PORT78_ADC0_SE12 |
PORT79_ADC0_SE13 */
  (uint16)( SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(6) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(8) |
            SHL_PAD_U16(9) |
            SHL_PAD_U16(14) |
            SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT80_ADC0_SE14 */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads  96 ... 111 : PORT96_DISABLED |
PORT97_DISABLED |
PORT98_DISABLED |
PORT99_DISABLED |
PORT101_DISABLED |
PORT111_DISABLED */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_DISABLED */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads 128 ... 143 : PORT132_DISABLED |
PORT133_DISABLED |
PORT136_CMP0_IN3 |
PORT137_DISABLED */
  (uint16)( SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(8) |
            SHL_PAD_U16(9)
          )
}
,
/*  Mode PORT_GPIO_MODE: */
{
/* Pads   0 ...  15 : PORT0_GPIO |
PORT1_GPIO |
PORT2_GPIO |
PORT3_GPIO |
PORT4_GPIO |
PORT5_GPIO |
PORT7_GPIO |
PORT10_GPIO |
PORT11_GPIO |
PORT12_GPIO |
PORT13_GPIO */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(10) |
            SHL_PAD_U16(11) |
            SHL_PAD_U16(12) |
            SHL_PAD_U16(13)
          ),
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT32_GPIO |
PORT33_GPIO |
PORT34_GPIO |
PORT35_GPIO |
PORT36_GPIO |
PORT37_GPIO |
PORT38_GPIO |
PORT39_GPIO |
PORT45_GPIO */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(6) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(13)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT65_GPIO |
PORT66_GPIO |
PORT67_GPIO |
PORT68_GPIO |
PORT69_GPIO |
PORT70_GPIO |
PORT71_GPIO |
PORT72_GPIO |
PORT73_GPIO |
PORT78_GPIO |
PORT79_GPIO */
  (uint16)( SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(6) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(8) |
            SHL_PAD_U16(9) |
            SHL_PAD_U16(14) |
            SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT80_GPIO */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads  96 ... 111 : PORT96_GPIO |
PORT97_GPIO |
PORT98_GPIO |
PORT99_GPIO |
PORT101_GPIO |
PORT111_GPIO */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_GPIO */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads 128 ... 143 : PORT132_GPIO |
PORT133_GPIO |
PORT136_GPIO |
PORT137_GPIO */
  (uint16)( SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(8) |
            SHL_PAD_U16(9)
          )
}
,
/*  Mode PORT_ALT2_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT1_FTM1_CH1 |
PORT7_FTM0_FLT2 |
PORT10_FTM1_CH4 |
PORT11_FTM1_CH5 |
PORT12_FTM1_CH6 |
PORT13_FTM1_CH7 */
  (uint16)( SHL_PAD_U16(1) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(10) |
            SHL_PAD_U16(11) |
            SHL_PAD_U16(12) |
            SHL_PAD_U16(13)
          ),
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT32_LPUART0_RX |
PORT33_LPUART0_TX |
PORT34_FTM1_CH0 |
PORT35_FTM1_CH1 |
PORT36_FTM0_CH4 |
PORT37_FTM0_CH5 |
PORT38_LPI2C0_SDA |
PORT39_LPI2C0_SCL |
PORT45_FTM0_CH1 */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(6) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(13)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT65_FTM0_CH1 |
PORT66_FTM0_CH2 |
PORT67_FTM0_CH3 |
PORT68_FTM1_CH0 |
PORT70_LPUART1_RX |
PORT71_LPUART1_TX |
PORT72_LPUART1_RX |
PORT73_LPUART1_TX |
PORT78_FTM1_CH2 |
PORT79_FTM1_CH3 */
  (uint16)( SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(6) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(8) |
            SHL_PAD_U16(9) |
            SHL_PAD_U16(14) |
            SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT80_FTM1_FLT2 */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads  96 ... 111 : PORT96_FTM0_CH2 |
PORT97_FTM0_CH3 |
PORT111_FTM0_CH0 */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_FTM0_CH1 */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads 128 ... 143 : PORT133_TCLK2 |
PORT136_FTM0_CH6 |
PORT137_FTM0_CH7 */
  (uint16)( SHL_PAD_U16(5) |
            SHL_PAD_U16(8) |
            SHL_PAD_U16(9)
          )
}
,
/*  Mode PORT_ALT3_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT0_LPI2C0_SCLS |
PORT1_LPI2C0_SDAS |
PORT2_LPI2C0_SDA |
PORT3_LPI2C0_SCL |
PORT5_TCLK1 */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(5)
          ),
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT32_LPSPI0_PCS0 |
PORT33_LPSPI0_SOUT |
PORT34_LPSPI0_SCK |
PORT35_LPSPI0_SIN |
PORT36_LPSPI0_SOUT |
PORT37_LPSPI0_PCS1 */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT66_CAN0_RX |
PORT67_CAN0_TX |
PORT68_RTC_CLKOUT |
PORT69_RTC_CLKOUT |
PORT72_FTM1_FLT0 |
PORT73_FTM1_FLT1 */
  (uint16)( SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(8) |
            SHL_PAD_U16(9)
          ),
/* Pads 80 ... 95 */
  (uint16)0x0000,
/* Pads  96 ... 111 : PORT96_LPSPI1_SCK |
PORT97_LPSPI1_SIN |
PORT98_LPSPI1_SOUT |
PORT99_LPSPI1_PCS0 |
PORT101_LPTMR0_ALT2 */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(5)
          ),
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000
}
,
/*  Mode PORT_ALT4_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT0_FXIO_D2 |
PORT1_FXIO_D3 |
PORT4_CMP0_OUT |
PORT7_RTC_CLKIN |
PORT10_FXIO_D0 |
PORT11_FXIO_D1 */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(10) |
            SHL_PAD_U16(11)
          ),
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT32_LPTMR0_ALT3 |
PORT33_TCLK0 |
PORT34_FTM1_QD_PHB |
PORT35_FTM1_QD_PHA |
PORT37_LPSPI0_PCS0 */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(5)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT66_LPUART0_RX |
PORT67_LPUART0_TX */
  (uint16)( SHL_PAD_U16(2) |
            SHL_PAD_U16(3)
          ),
/* Pads 80 ... 95 */
  (uint16)0x0000,
/* Pads  96 ... 111 : PORT98_FXIO_D4 |
PORT99_FXIO_D5 |
PORT111_LPSPI0_SCK */
  (uint16)( SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_LPSPI0_SIN */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads 128 ... 143 */
  (uint16)0x0000
}
,
/*  Mode PORT_ALT5_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT1_FTM1_QD_PHA |
PORT2_FXIO_D4 |
PORT3_FXIO_D5 |
PORT11_CMP0_RRT */
  (uint16)( SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(11)
          ),
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT32_CAN0_RX |
PORT33_CAN0_TX |
PORT37_CLKOUT */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(5)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads 80 ... 95 */
  (uint16)0x0000,
/* Pads  96 ... 111 : PORT98_FXIO_D6 |
PORT99_FXIO_D7 */
  (uint16)( SHL_PAD_U16(2) |
            SHL_PAD_U16(3)
          ),
/* Pads 112 ... 127 : PORT112_CMP0_RRT */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads 128 ... 143 : PORT132_CAN0_RX |
PORT133_CAN0_TX */
  (uint16)( SHL_PAD_U16(4) |
            SHL_PAD_U16(5)
          )
}
,
/*  Mode PORT_ALT6_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT0_LPUART0_CTS |
PORT1_LPUART0_RTS |
PORT2_LPUART0_RX |
PORT3_LPUART0_TX |
PORT7_LPUART1_RTS */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(7)
          ),
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT34_TRGMUX_IN3 |
PORT35_TRGMUX_IN2 |
PORT36_TRGMUX_IN1 |
PORT37_TRGMUX_IN0 */
  (uint16)( SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT65_FTM1_CH7 |
PORT68_FTM1_QD_PHB |
PORT70_FTM1_QD_PHB |
PORT71_FTM1_QD_PHA |
PORT72_LPUART0_CTS |
PORT73_LPUART0_RTS |
PORT78_TRGMUX_IN9 |
PORT79_TRGMUX_IN8 */
  (uint16)( SHL_PAD_U16(1) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(6) |
            SHL_PAD_U16(7) |
            SHL_PAD_U16(8) |
            SHL_PAD_U16(9) |
            SHL_PAD_U16(14) |
            SHL_PAD_U16(15)
          ),
/* Pads 80 ... 95 */
  (uint16)0x0000,
/* Pads  96 ... 111 : PORT96_FXIO_D0 |
PORT97_FXIO_D1 |
PORT98_TRGMUX_IN5 |
PORT99_TRGMUX_IN4 |
PORT101_TRGMUX_IN7 */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(2) |
            SHL_PAD_U16(3) |
            SHL_PAD_U16(5)
          ),
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 : PORT132_FXIO_D6 |
PORT133_FXIO_D7 */
  (uint16)( SHL_PAD_U16(4) |
            SHL_PAD_U16(5)
          )
}
,
/*  Mode PORT_ALT7_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT0_TRGMUX_OUT3 |
PORT1_TRGMUX_OUT0 |
PORT4_JTAG_TMS_SWD_DIO |
PORT5_RESET_b |
PORT10_JTAG_TDO */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(4) |
            SHL_PAD_U16(5) |
            SHL_PAD_U16(10)
          ),
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads 32 ... 47 */
  (uint16)0x0000,
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT68_JTAG_TCLK_SWD_CLK |
PORT69_JTAG_TDI */
  (uint16)( SHL_PAD_U16(4) |
            SHL_PAD_U16(5)
          ),
/* Pads 80 ... 95 */
  (uint16)0x0000,
/* Pads  96 ... 111 : PORT96_TRGMUX_OUT1 |
PORT97_TRGMUX_OUT2 |
PORT99_NMI_b */
  (uint16)( SHL_PAD_U16(0) |
            SHL_PAD_U16(1) |
            SHL_PAD_U16(3)
          ),
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000
}


    };
#endif

#define PORT_STOP_SEC_CONST_16
/** @violates @ref PORT_CFG_REF_1 only preprocessor statements and comments before "#include". */
/** @violates @ref PORT_CFG_REF_2 Precautions to prevent the contents of a header file being included twice. */
#include "Port_MemMap.h"
/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

#ifdef __cplusplus
}
#endif
/** @} */

/* End of File */
