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
    
    deflangVM::programBus.empty();
    
    istringstream f(program);
    string s;    
    while (getline(f, s, '\n')) {
        
        vector<string> programParts;
        istringstream g(s);
        string ss; 
        while (getline(g, ss, ' ')) {
            cout << ss << endl;
            programParts.push_back(ss);
        }
        deflangVM::programBus.push_back(programParts);
    }
    
    std::cout << deflangVM::programBus[0][0];
}

void deflangVM::exacute() {
    bool doNextCycle = true;
    unsigned long progPos = 0;
    while(doNextCycle) {
        
    }
}