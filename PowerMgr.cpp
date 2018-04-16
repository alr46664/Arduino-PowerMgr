#include "PowerMgr.h"

using namespace std;

PowerMgr::PowerMgr() { }

/*
 * Enter mask to setup how power will be managed by Arduino (type in 0 || and then continue with the list of modules that should be enabled in the system)
 *    Bit -  Module
 *     0     ADC
 *     1     TIMER0
 *     2     TIMER1
 *     3     TIMER2
 *     4     SPI
 *     5     TWI / I2C
 *     6     USART / HARD SERIAL
 */
void PowerMgr::setupModules(unsigned char mask){
  //All SoC Modules - Disable or Enable
  if (mask & POWER_EN_ALL == POWER_EN_ALL)   power_all_enable();
  else if (mask & POWER_EN_ALL == 0) power_all_disable();
  else {  
    //Analog-Digital converter - Disable or Enable
    if (mask & POWER_EN_ADC == 0)  power_adc_disable();     
    else                power_adc_enable();    
    
    //Timer0 - Disable or Enable
    if (mask & POWER_EN_TIMER0 == 0)  power_timer0_disable(); 
    else                power_timer0_enable();
    //Timer1 - Disable or Enable
    if (mask & POWER_EN_TIMER1 == 0)  power_timer1_disable(); 
    else                power_timer1_enable();
    //Timer2 - Disable or Enable
    if (mask & POWER_EN_TIMER2 == 0)  power_timer2_disable(); 
    else                power_timer2_enable();
    
    //SPI converter - Disable or Enable
    if (mask & POWER_EN_SPI == 0) power_spi_disable(); 
    else                power_spi_enable();   
    //TWI (I2C) - Disable or Enable
    if (mask & POWER_EN_TWI == 0) power_twi_disable(); 
    else                power_twi_enable();  
    
    //USART0 (Serial) - Disable or Enable
    if (mask & POWER_EN_USART == 0) power_usart0_disable(); 
    else                power_usart0_enable();    
  }
}