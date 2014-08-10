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
using namespace std;
class deflangVM {
public:
    std::map<std::string,int> varMap;
    std::map<std::string,std::vector<std::string> > defMap;
    std::vector<std::string> programBus;
    deflangVM();
    deflangVM(const deflangVM& orig);
    virtual ~deflangVM();
private:

};

#endif	/* DEFLANGVM_H */

