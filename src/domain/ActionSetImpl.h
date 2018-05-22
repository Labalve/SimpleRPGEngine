#ifndef ACTIONSETIMPL_H
#define ACTIONSETIMPL_H

#include "ActionSet.h"
#include "Action.h"

#include <vector>

using namespace std;

class ActionSetImpl : public ActionSet {

public:
    ActionSetImpl(vector<Action *> actions);
    vector<Action *> getActions();
    Action * getNextAction();
    int getNumberOfActions();
    
private:
    vector<Action *> actions;
    int lastTaken;
    
};

#endif

