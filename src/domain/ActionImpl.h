#ifndef ACTIONIMPL_H
#define ACTIONIMPL_H

#include "Action.h"
#include <string>

class ActionImpl : public Action{
public:
    ActionImpl(std::string name);
    std::string getName(); 
    
private:
    std::string name;

};

#endif

