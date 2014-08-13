/* 
 * File:   nativeFunction.h
 * Author: border2
 *
 * Created on 11 August 2014, 21:12
 */

#ifndef NATIVEFUNCTION_H
#define	NATIVEFUNCTION_H
#include <vector>
#include <string>
using namespace std;
class deflangVM;
class nativeFunction {
public:
    void callFunction(std::vector<std::string>* memBus, int*  commandPos, deflangVM * vm);

};

#endif	/* NATIVEFUNCTION_H */

