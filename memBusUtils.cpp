/* 
 * File:   memBusUtils.cpp
 * Author: border2
 * 
 * Created on 12 August 2014, 15:41
 */

#include "memBusUtils.h"

void memBusUtils::moveBackward(std::vector<std::string>* memBus, int point, int amount) {
    int memBusLength = memBus->size();
   
    
    for(int current = point; current < memBusLength  ; current++) {
       
    memBus->at(current - amount) = memBus->at(current);
        
    
    }
    
    memBus->erase(memBus->end()-amount,memBus->end());
}
