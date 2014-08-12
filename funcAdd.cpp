/* 
 * File:   funcAdd.cpp
 * Author: border2
 * 
 * Created on 12 August 2014, 12:24
 */

#include "funcAdd.h"

funcAdd::funcAdd() {
}



nativeFuncReturner nativeFunction::callFunction(std::vector<std::string>* memBus, int commandPos){
    nativeFuncReturner returner;
    if(commandPos >= 2) {
        double result = stringUtils::stringToDouble(memBus->at(commandPos - 1)) + stringUtils::stringToDouble(memBus->at(commandPos - 2));
        std::ostringstream strs;
        strs << result;
        memBus->at(commandPos) = strs.str();
        returner.error = false;
        returner.errorm = "No error";
        returner.commandPos = commandPos + 1;
        return returner;
    } else {
        memBus->at(commandPos) = "0";
        returner.error = false;
        returner.errorm = "No error";
        returner.commandPos = commandPos + 1;
        return returner;
    }
    
    
}

