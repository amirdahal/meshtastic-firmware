// LED - status indication// LED - status indication

#define LED_PIN 35#define LED_PIN 35



// Button - user interface// Button - user interface

#define BUTTON_PIN 0 // This is the BOOT button, and it has its own pull-up resistor#define BUTTON_PIN 0 // This is the BOOT button, and it has its own pull-up resistor



// Battery voltage monitoring - Based on GitHub issue #6978 findings// Battery voltage monitoring - Based on GitHub issue #6978 findings

#define BATTERY_PIN 1 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage#define BATTERY_PIN 1 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage

#define ADC_CHANNEL ADC1_GPIO1_CHANNEL#define ADC_CHANNEL ADC1_GPIO1_CHANNEL

#define ADC_MULTIPLIER 103.0 // Calibrated based on patricklouvel's findings in issue #6978 - R12~80K, R13=1K gives ~81:1 ratio#define ADC_MULTIPLIER 103.0 // Calibrated based on patricklouvel's findings in issue #6978 - R12~80K, R13=1K gives ~81:1 ratio

#define ADC_ATTENUATION ADC_ATTEN_DB_0 // Best resolution for low voltage readings#define ADC_ATTENUATION ADC_ATTEN_DB_0 // Best resolution for low voltage readings

#define ADC_CTRL 37 // Pin to enable the voltage divider (GPIO37 controls P-MOSFET)#define ADC_CTRL 37 // Pin to enable the voltage divider (GPIO37 controls P-MOSFET)

#define ADC_CTRL_ENABLED LOW // Set to LOW to enable the P-MOSFET for voltage reading#define ADC_CTRL_ENABLED LOW // Set to LOW to enable the P-MOSFET for voltage reading



// Display - OLED connected via I2C by the default hardware configuration// Display - OLED connected via I2C by the default hardware configuration

#define HAS_SCREEN 1#define HAS_SCREEN 1

#define USE_SSD1306#define USE_SSD1306

#define I2C_SCL 17#define I2C_SCL 17

#define I2C_SDA 18#define I2C_SDA 18



// UART - The 1mm JST SH connector closest to the USB-C port// UART - The 1mm JST SH connector closest to the USB-C port

#define UART_TX 43#define UART_TX 43

#define UART_RX 44#define UART_RX 44



// Peripheral I2C - The 1mm JST SH connector furthest from the USB-C port which follows Adafruit connection standard. There are no// Peripheral I2C - The 1mm JST SH connector furthest from the USB-C port which follows Adafruit connection standard. There are no

// pull-up resistors on these lines, the downstream device needs to include them. TODO: test, currently untested// pull-up resistors on these lines, the downstream device needs to include them. TODO: test, currently untested

#define I2C_SCL1 21#define I2C_SCL1 21

#define I2C_SDA1 38  // Fixed pin conflict with LORA_MOSI (GPIO10)#define I2C_SDA1 38  // Fixed pin conflict with LORA_MOSI (GPIO10)



// Radio// Radio

#define USE_LR1121#define USE_LR1121



#define LORA_SCK 9#define LORA_SCK 9

#define LORA_MOSI 10#define LORA_MOSI 10

#define LORA_MISO 11#define LORA_MISO 11

#define LORA_RESET 12#define LORA_RESET 12

#define LORA_CS 8#define LORA_CS 8

#define LORA_DIO9 13#define LORA_DIO9 13



// LR1121// LR1121

#ifdef USE_LR1121#ifdef USE_LR1121

#define LR1121_IRQ_PIN 14#define LR1121_IRQ_PIN 14

#define LR1121_NRESET_PIN LORA_RESET#define LR1121_NRESET_PIN LORA_RESET

#define LR1121_BUSY_PIN LORA_DIO9#define LR1121_BUSY_PIN LORA_DIO9

#define LR1121_SPI_NSS_PIN LORA_CS#define LR1121_SPI_NSS_PIN LORA_CS

#define LR1121_SPI_SCK_PIN LORA_SCK#define LR1121_SPI_SCK_PIN LORA_SCK

#define LR1121_SPI_MOSI_PIN LORA_MOSI#define LR1121_SPI_MOSI_PIN LORA_MOSI

#define LR1121_SPI_MISO_PIN LORA_MISO#define LR1121_SPI_MISO_PIN LORA_MISO

#define LR11X0_DIO3_TCXO_VOLTAGE 3.0#define LR11X0_DIO3_TCXO_VOLTAGE 3.0

#define LR11X0_DIO_AS_RF_SWITCH#define LR11X0_DIO_AS_RF_SWITCH

#endif#endif



// Compatibility with old variant.h file structure// Charging detection - Based on GitHub issue #6978 findings

#define LORA_DIO1 LR1121_IRQ_PIN// GPIO34 is connected to CHRG pin for charge detection
#define HAS_BATTERY_CHARGE_DETECTION 1
#define CHARGE_DETECTION_PIN 34