/* 
 * File:   main.cpp
 * Author: border2
 *
 * Created on 10 August 2014, 16:09
 */

#include <cstdlib>
#include "deflangVM.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    deflangVM* test = new deflangVM();
    test->loadInProgram("He llo\nasd das\ndas dsa");
    return 0;
}

