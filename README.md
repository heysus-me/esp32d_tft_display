# esp32d tft display
Document the process of setting up a microcontroller (ESP32) with a round TFT display using SPI protocol

# Requirements
Ardunio IDE

## What is the Serial
Serial Peripheral Interface (SPI) is a full-duplex interface; both main and subnode can send data at the same time via the MOSI and MISO lines respectively. During SPI communication, the data is simultaneously transmitted (shifted out serially onto the MOSI/SDO bus) and received (the data on the bus (MISO/SDI) is sampled or read in).

# Definitions
| Word                              | Definition                                                     |
|-----------------------------------|----------------------------------------------------------------|
| MOSI (Master Output/Slave Input)  | Line for the master to send data to the slave.                 |
| MISO (Master Input/Slave Output)  | Line for the slave to send data to the master.                 |
| SCLK (Clock)                      | Line for the clock signal.                                     |
| SS/CS (Slave Select/Chip Select)  | Line for the master to select which slave to send data to.     |

# Descriptions
| Function            | Common Labels  | Description                                                              |
|---------------------|----------------|--------------------------------------------------------------------------|
| Clock               | CLK, SCL, SCLK | signal sent by master to synchronize data and set the data trasfer speed |
| Chip Select         | CS, SS         | signal used by master to select a slave                                  |
| Master Out Slave In | MOSI, SDO, SDA | Data sent by master                                                      |
| Master In Slave Out | MISO, SDI      | Data received by master                                                  |

# Pin setup
| ESP32   | TFT Display | 
| GPIO23  | SDA |
| GPIO18  | SCL |
| GPIO19  | DC |
| GPIO21  | RES |
| GPIO5   | CS | 

# How to use demo.h
Before you can run the demo.h file, you must obtain the TFT_eSPI.h library. Create a new file `TFT_eSPI/User_Setups/Setup_Esp32_RoundTFT.h`
```c
// ---- Driver (most round 240x240 modules are GC9A01) ----
#define GC9A01_DRIVER

// ---- Display size ----
#define TFT_WIDTH  240
#define TFT_HEIGHT 240

// ---- ESP32 pins ----
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   5
#define TFT_DC   19
#define TFT_RST  21

// Optional: if you later move BLK to a GPIO for dimming
// #define TFT_BL   22
// #define TFT_BACKLIGHT_ON HIGH

// ---- SPI speed (start conservative) ----
#define SPI_FREQUENCY  10000000
```

Edit the `User_Setup_Select.h` to enable the newly created configuration.
```c
#include <User_Setups/Setup_Esp32_RoundTFT.h>
```
