
#include <PowerMgr.h> 

void setup(){
    PowerMgr::setupModules(POWER_EN_ALL & (~POWER_EN_ADC));
} 

void loop(){

}
