#ifndef __BlackLEDMk2__
#define __BlackLEDMk2__

//warnings
#if F_BUS < 60000000
#error "Teensy needs to run at 120MHz or faster to read all packets in time"
#endif

//includes
#include <SPI.h>
#if defined(__MK66FX1M0__)
#define _use_eth_on_spi1_
#endif
#include <Ethernet.h>
#include <TeensyMAC.h>
#include <EEPROM.h>

//constants
const int oemCode = 0x0000; // OemUnkown

#if defined(__MK66FX1M0__)
#define RESET_PIN 24

const int LED_PIN[] = {15, 22, 23, 9, 10, 13, 11, 12, 2, 14, 7, 8, 6, 20, 21, 5};

// #define LED_PIN01 15
// #define LED_PIN02 22
// #define LED_PIN03 23
// #define LED_PIN04 9
// #define LED_PIN05 10
// #define LED_PIN06 13
// #define LED_PIN07 11
// #define LED_PIN08 12
// #define LED_PIN09 2
// #define LED_PIN10 14
// #define LED_PIN11 7
// #define LED_PIN12 8
// #define LED_PIN13 6
// #define LED_PIN14 20
// #define LED_PIN15 21
// #define LED_PIN16 5

#define BTN0  28
#define BTN1  29
#define BTN2  30
#define SDA   33
#define SCL   34

const int GPIO[] = {35, 27, 36, 26, 37, 25, 38, 39};
// #define GPIO_0 35
// #define GPIO_1 27
// #define GPIO_2 36
// #define GPIO_3 26
// #define GPIO_4 37
// #define GPIO_5 25
// #define GPIO_6 38
// #define GPIO_7 39

#else
#define RESET_PIN 9
#endif

#endif
