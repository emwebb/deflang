/* 
 * File:   funcSubtract.h
 * Author: border2
 *
 * Created on 13 August 2014, 10:54
 */

#ifndef FUNCSUBTRACT_H
#define	FUNCSUBTRACT_H

#include "nativeFunction.h"
#include "stringUtils.h"
#include "memBusUtils.h"
#include "console.h"
#include "deflangVM.h"
#include <sstream>

class funcSubtract : public nativeFunction{
public:
    funcSubtract();
    void callFunction(std::vector<std::string>* memBus, int*  commandPos, deflangVM * vm);
private:

};

#endif	/* FUNCSUBTRACT_H */

