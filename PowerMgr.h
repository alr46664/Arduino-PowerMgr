#ifndef _PowerMgr_H
#define _PowerMgr_H

#include "Arduino.h"
#include <avr/power.h>

#define POWER_EN_ADC    1
#define POWER_EN_TIMER0 2 
#define POWER_EN_TIMER1 4 
#define POWER_EN_TIMER2 8
#define POWER_EN_SPI    16 
#define POWER_EN_TWI    32
#define POWER_EN_USART  64 

#define POWER_EN_ALL    0xFF

class PowerMgr {
public:
  static void setupModules(unsigned char mask);
private:
  PowerMgr();
};

#endif  // _PowerMgr_H