/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: LPC55S69
package_id: LPC55S69JBD100
mcu_data: ksdk2_0
processor_version: 7.0.1
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33_core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '1', peripheral: GPIO, signal: 'PIO1, 4', pin_signal: PIO1_4/FC0_SCK/SD0_D0/CTIMER2_MAT1/SCT0_OUT0/FREQME_GPIO_CLK_A, direction: OUTPUT, mode: no_init}
  - {pin_num: '5', peripheral: GPIO, signal: 'PIO1, 6', pin_signal: PIO1_6/FC0_TXD_SCL_MISO_WS/SD0_D3/CTIMER2_MAT1/SCT_GPI3, direction: OUTPUT, mode: no_init}
  - {pin_num: '9', peripheral: GPIO, signal: 'PIO1, 7', pin_signal: PIO1_7/FC0_RTS_SCL_SSEL1/SD0_D1/CTIMER2_MAT2/SCT_GPI4, direction: OUTPUT, mode: no_init}
  - {pin_num: '88', peripheral: GPIO, signal: 'PIO0, 5', pin_signal: PIO0_5/FC4_RXD_SDA_MOSI_DATA/CTIMER3_MAT0/SCT_GPI5/FC3_RTS_SCL_SSEL1/MCLK/SECURE_GPIO0_5, direction: INPUT,
    mode: pullUp}
  - {pin_num: '10', peripheral: GPIO, signal: 'PIO1, 9', pin_signal: PIO1_9/FC1_SCK/CT_INP4/SCT0_OUT2/FC4_CTS_SDA_SSEL0/ADC0_12, direction: INPUT, mode: pullUp}
  - {pin_num: '64', peripheral: GPIO, signal: 'PIO1, 18', pin_signal: PIO1_18/SD1_POW_EN/SCT0_OUT5/PLU_OUT0, direction: INPUT, mode: pullUp}
  - {pin_num: '94', peripheral: FLEXCOMM0, signal: TXD_SCL_MISO_WS, pin_signal: PIO0_30/FC0_TXD_SCL_MISO_WS/SD1_D3/CTIMER0_MAT0/SCT0_OUT9/SECURE_GPIO0_30}
  - {pin_num: '92', peripheral: FLEXCOMM0, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO0_29/FC0_RXD_SDA_MOSI_DATA/SD1_D2/CTIMER2_MAT3/SCT0_OUT8/CMP0_OUT/PLU_OUT2/SECURE_GPIO0_29}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M33 (Core #0) */
void BOARD_InitPins(void)
{
    /* Enables the clock for the I/O controller.: Enable Clock. */
    CLOCK_EnableClock(kCLOCK_Iocon);

    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    /* Enables the clock for the GPIO1 module */
    CLOCK_EnableClock(kCLOCK_Gpio1);

    gpio_pin_config_t gpio0_pin88_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_5 (pin 88)  */
    GPIO_PinInit(GPIO, 0U, 5U, &gpio0_pin88_config);

    gpio_pin_config_t gpio1_pin1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_4 (pin 1)  */
    GPIO_PinInit(GPIO, 1U, 4U, &gpio1_pin1_config);

    gpio_pin_config_t gpio1_pin5_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_6 (pin 5)  */
    GPIO_PinInit(GPIO, 1U, 6U, &gpio1_pin5_config);

    gpio_pin_config_t gpio1_pin9_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_7 (pin 9)  */
    GPIO_PinInit(GPIO, 1U, 7U, &gpio1_pin9_config);

    gpio_pin_config_t gpio1_pin10_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_9 (pin 10)  */
    GPIO_PinInit(GPIO, 1U, 9U, &gpio1_pin10_config);

    gpio_pin_config_t gpio1_pin64_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_18 (pin 64)  */
    GPIO_PinInit(GPIO, 1U, 18U, &gpio1_pin64_config);

    IOCON->PIO[0][29] = ((IOCON->PIO[0][29] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT029 (pin 92) is configured as FC0_RXD_SDA_MOSI_DATA. */
                         | IOCON_PIO_FUNC(PIO0_29_FUNC_ALT1)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_29_DIGIMODE_DIGITAL));

    IOCON->PIO[0][30] = ((IOCON->PIO[0][30] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT030 (pin 94) is configured as FC0_TXD_SCL_MISO_WS. */
                         | IOCON_PIO_FUNC(PIO0_30_FUNC_ALT1)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_30_DIGIMODE_DIGITAL));

    IOCON->PIO[0][5] = ((IOCON->PIO[0][5] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT05 (pin 88) is configured as PIO0_5. */
                        | IOCON_PIO_FUNC(PIO0_5_FUNC_ALT0)

                        /* Selects function mode (on-chip pull-up/pull-down resistor control).
                         * : Pull-up.
                         * Pull-up resistor enabled. */
                        | IOCON_PIO_MODE(PIO0_5_MODE_PULL_UP)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_5_DIGIMODE_DIGITAL));

    IOCON->PIO[1][18] = ((IOCON->PIO[1][18] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT118 (pin 64) is configured as PIO1_18. */
                         | IOCON_PIO_FUNC(PIO1_18_FUNC_ALT0)

                         /* Selects function mode (on-chip pull-up/pull-down resistor control).
                          * : Pull-up.
                          * Pull-up resistor enabled. */
                         | IOCON_PIO_MODE(PIO1_18_MODE_PULL_UP)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO1_18_DIGIMODE_DIGITAL));

    IOCON->PIO[1][4] = ((IOCON->PIO[1][4] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT14 (pin 1) is configured as PIO1_4. */
                        | IOCON_PIO_FUNC(PIO1_4_FUNC_ALT0)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_4_DIGIMODE_DIGITAL));

    IOCON->PIO[1][6] = ((IOCON->PIO[1][6] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT16 (pin 5) is configured as PIO1_6. */
                        | IOCON_PIO_FUNC(PIO1_6_FUNC_ALT0)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_6_DIGIMODE_DIGITAL));

    IOCON->PIO[1][7] = ((IOCON->PIO[1][7] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT17 (pin 9) is configured as PIO1_7. */
                        | IOCON_PIO_FUNC(PIO1_7_FUNC_ALT0)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_7_DIGIMODE_DIGITAL));

    if (Chip_GetVersion()==1)
    {
        IOCON->PIO[1][9] = ((IOCON->PIO[1][9] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT19 (pin 10) is configured as PIO1_9. */
                        | IOCON_PIO_FUNC(PIO1_9_FUNC_ALT0)

                        /* Selects function mode (on-chip pull-up/pull-down resistor control).
                         * : Pull-up.
                         * Pull-up resistor enabled. */
                        | IOCON_PIO_MODE(PIO1_9_MODE_PULL_UP)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_9_DIGIMODE_DIGITAL));
    }
    else
    {
        IOCON->PIO[1][9] = ((IOCON->PIO[1][9] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT19 (pin 10) is configured as PIO1_9. */
                        | IOCON_PIO_FUNC(PIO1_9_FUNC_ALT0)

                        /* Selects function mode (on-chip pull-up/pull-down resistor control).
                         * : Pull-up.
                         * Pull-up resistor enabled. */
                        | IOCON_PIO_MODE(PIO1_9_MODE_PULL_UP)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_9_DIGIMODE_DIGITAL));
    }
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
