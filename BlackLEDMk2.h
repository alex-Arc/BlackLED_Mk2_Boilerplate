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

#define LED_PIN01
#define LED_PIN02
#define LED_PIN03
#define LED_PIN04
#define LED_PIN05
#define LED_PIN06
#define LED_PIN07
#define LED_PIN08
#define LED_PIN09
#define LED_PIN10
#define LED_PIN11
#define LED_PIN12
#define LED_PIN13
#define LED_PIN14
#define LED_PIN15
#define LED_PIN16
#define LED_PIN17
#define LED_PIN18

#else
#define RESET_PIN 9
#endif

#endif
