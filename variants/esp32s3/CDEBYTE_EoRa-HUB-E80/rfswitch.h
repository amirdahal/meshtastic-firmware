#include "RadioLib.h"

const uint32_t rfswitch_dio_pins[] = {
RADIOLIB_LR11X0_DIO5, RADIOLIB_LR11X0_DIO6,
RADIOLIB_NC, RADIOLIB_NC, RADIOLIB_NC
};

const Module::RfSwitchMode_t rfswitch_table[] = {
{LR11x0::MODE_STBY, {LOW, LOW}},
{LR11x0::MODE_RX, {LOW, HIGH}}, // Key for successful initialization & RX
{LR11x0::MODE_TX, {HIGH, HIGH}},
{LR11x0::MODE_TX_HP, {HIGH, LOW}},
{LR11x0::MODE_TX_HF, {HIGH, HIGH}}, // Allows 2.4GHz init without Critical Error 7
END_OF_MODE_TABLE,
};