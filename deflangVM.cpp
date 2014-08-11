/* 
 * File:   deflangVM.cpp
 * Author: border2
 * 
 * Created on 10 August 2014, 16:22
 */

#include "deflangVM.h"

deflangVM::deflangVM() {
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
    unsigned long progPos = 0;
    while(doNextCycle) {
        std::vector<std::string> memBus;
        memBus= deflangVM::programBus[progPos];
        
        
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
