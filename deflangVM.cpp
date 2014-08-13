/* 
 * File:   deflangVM.cpp
 * Author: border2
 * 
 * Created on 10 August 2014, 16:22
 */

#include "deflangVM.h"

deflangVM::deflangVM() {
    addNativeFunction("ADD", *new funcAdd());
}

void deflangVM::loadInProgram(std::string program) {
    
    deflangVM::programBus.clear();
    
    istringstream f(program);
    string s;    
    while (getline(f, s, '\n')) {
        
        vector<string> programParts;
        istringstream g(s);
        string ss; 
        while (getline(g, ss, ' ')) {
            programParts.push_back(ss);
        }
        deflangVM::programBus.push_back(programParts);
    }
    
}

void deflangVM::exacute() {
    bool doNextCycle = true;
    unsigned int progPos = 0;
    while(doNextCycle) {
        std::vector<std::string> memBus;
        memBus= deflangVM::programBus[progPos];
        
        if(memBus.size() != 0) {
            
            int commandPos = 0;
            while(commandPos < memBus.size()) {
                if(deflangVM::nativeFunctionMap.find(memBus[commandPos]) != deflangVM::nativeFunctionMap.end()) {
                    deflangVM::nativeFunctionMap[memBus[commandPos]].callFunction(&memBus,&commandPos,this);
                } else {
                    commandPos++;
                }
            }
        }
        
        printMemBus(memBus);
        progPos++;
        doNextCycle = progPos < deflangVM::programBus.size();
        
    }
    
    
}

void deflangVM::printMemBus(std::vector<std::string> memBus) {
    
        if(memBus.size() != 0) {
            int commandPos = 0;
            while(commandPos < memBus.size()) {
                std::cout << memBus[commandPos] << " ";
                commandPos++;
            }
        }
        std::cout << endl;     
}

void deflangVM::addNativeFunction(std::string name, nativeFunction function) {
    deflangVM::nativeFunctionMap[name] = function;
}