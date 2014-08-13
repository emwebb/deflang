/* 
 * File:   deflangVM.h
 * Author: border2
 *
 * Created on 10 August 2014, 16:22
 */

#ifndef DEFLANGVM_H
#define	DEFLANGVM_H
#include <map>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream> 
#include <iostream>
#include <stdlib.h>
#include "nativeFunction.h"
#include "funcAdd.h"
#include "funcSubtract.h"
using namespace std;

class deflangVM {
public:
    std::map<std::string,nativeFunction> nativeFunctionMap;
    std::map<std::string,std::vector<std::string> > defMap;
    std::vector<std::vector<std::string> > programBus;
    deflangVM();
    void loadInProgram(std::string program);
    void exacute();
    void printMemBus(std::vector<std::string> memBus);
    void addNativeFunction(std::string name, nativeFunction function);
private:

};

#endif	/* DEFLANGVM_H */

