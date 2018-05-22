#ifndef CHARACTER_H
#define CHARACTER_H

#include "ActionSet.h"
#include <string>

using namespace std;

class ActionSet;

class Character {
    
public:
    virtual string getID() = 0;
    virtual string getName() = 0;
    virtual ActionSet * getActionSet() = 0;
};

#endif