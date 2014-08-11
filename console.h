/* 
 * File:   console.h
 * Author: border2
 *
 * Created on 11 August 2014, 17:53
 */

#ifndef CONSOLE_H
#define	CONSOLE_H
#include "deflangVM.h"
#include <map>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream> 
#include <iostream>
#include <stdlib.h> 
using namespace std;
using namespace std;
class console {
public:
    deflangVM* vm;
    console();
    void start();
private:

};

#endif	/* CONSOLE_H */

