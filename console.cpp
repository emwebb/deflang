/* 
 * File:   console.cpp
 * Author: border2
 * 
 * Created on 11 August 2014, 17:53
 */

#include "console.h"

console::console() {
    vm = new deflangVM();
}

void console::start() {
    bool cont = true;
    while(cont) {
        string input;
        cout << "dfl>";
        getline(cin,input);
        if(input == "EXIT") {
            cont = false;
        } else {
            vm->loadInProgram(input);
            vm->exacute();
        }
    }
}

