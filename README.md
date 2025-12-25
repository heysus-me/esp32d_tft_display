# esp32d tft display
Document the process of setting up a microcontroller (ESP32) with a round TFT display using SPI protocol

## What is the Serial
Serial Peripheral Interface (SPI) is a full-duplex interface; both main and subnode can send data at the same time via the MOSI and MISO lines respectively. During SPI communication, the data is simultaneously transmitted (shifted out serially onto the MOSI/SDO bus) and received (the data on the bus (MISO/SDI) is sampled or read in).

# Definitions
| Word                              | Definition                                                     |
|-----------------------------------|----------------------------------------------------------------|
| MOSI (Master Output/Slave Input)  | Line for the master to send data to the slave.                 |
| MISO (Master Input/Slave Output)  | Line for the slave to send data to the master.                 |
| SCLK (Clock)                      | Line for the clock signal.                                     |
| SS/CS (Slave Select/Chip Select)  | Line for the master to select which slave to send data to.     |
| SDA (Serial Data Line)            | Responsible for carrying data between devices                  |
| SCL (Serial Clock Line)           | Provides the clock signal that synchronizes this data transfer |
| DC (data/command)                 |                                                                |

# Pins
| Pin                 | Common Labels  | Description                                                              |
|---------------------|----------------|--------------------------------------------------------------------------|
| Clock               | CLK, SCL, SCLK | signal sent by master to synchronize data and set the data trasfer speed |
| Chip Select         | CS, SS         | signal used by master to select a slave                                  |
| Master Out Slave In | MOSI, SDO, SDA | Data sent by master                                                      |
| Master In Slave Out | MISO, SDI      | Data received by master                                                  |

## TFT LCD Display

