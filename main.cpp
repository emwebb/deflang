/* 
 * File:   main.cpp
 * Author: border2
 *
 * Created on 10 August 2014, 16:09
 */

#include <cstdlib>
#include "deflangVM.h"
#include "console.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    if(argc == 1) {
        console* cmd = new console();
        cmd->start();
    }
    return 0;
}

