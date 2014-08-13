/* 
 * File:   funcSubtract.cpp
 * Author: border2
 * 
 * Created on 13 August 2014, 10:54
 */

#include "funcSubtract.h"

funcSubtract::funcSubtract() {
}



void funcSubtract::callFunction(std::vector<std::string>* memBus, int * commandPos, deflangVM* vm){
    
    if(*commandPos >= 2) {
        double result = stringUtils::stringToDouble(memBus->at(*commandPos - 2)) - stringUtils::stringToDouble(memBus->at(*commandPos - 1));
        std::ostringstream strs;
        strs << result;
        memBus->at(*commandPos) = strs.str();
        memBusUtils::moveBackward(memBus,*commandPos,2);
        *commandPos -= 1;
        
    } else {
        memBus->at(*commandPos) = "0";
        *commandPos++;
    }
    
    
}
