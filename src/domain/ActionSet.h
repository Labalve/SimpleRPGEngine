#ifndef ACTIONSET_H
#define ACTIONSET_H

#include <vector>
#include "Action.h"

using namespace std;

class Action;

class ActionSet {
    
public:
    virtual vector<Action *> getActions() = 0;
    virtual Action * getNextAction() = 0;
    virtual int getNumberOfActions() = 0;
    
};


#endif