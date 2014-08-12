/* 
 * File:   nativeFunction.h
 * Author: border2
 *
 * Created on 11 August 2014, 21:12
 */

#ifndef NATIVEFUNCTION_H
#define	NATIVEFUNCTION_H
#include <string>
#include <vector>
using namespace std;
struct nativeFuncReturner {
    unsigned int commandPos;
    bool error;
    string errorm;
};

class nativeFunction {
public:
    nativeFuncReturner callFunction(std::vector<std::string>* memBus, int commandPos);

};

#endif	/* NATIVEFUNCTION_H */

