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
#include <string>
#include <sstream> 
#include <iostream>
using namespace std;
class deflangVM {
public:
    std::map<std::string,int> varMap;
    std::map<std::string,std::vector<std::string> > defMap;
    std::vector<std::vector<std::string> > programBus;
    deflangVM();
    void loadInProgram(std::string program);
    void exacute();
private:

};

#endif	/* DEFLANGVM_H */

