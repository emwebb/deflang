/* 
 * File:   stringUtils.cpp
 * Author: border2
 * 
 * Created on 12 August 2014, 14:27
 */

#include "stringUtils.h"

double stringUtils::stringToDouble(std::string s){
   std::istringstream i(s);
   double x;
   if (!(i >> x))
     return 0;
   return x;
}