#include "ActionSetImpl.h"

using namespace std;

ActionSetImpl::ActionSetImpl(vector<Action *> actions) {
    this->actions = actions; 
}

vector<Action *> ActionSetImpl::getActions(){
    return actions;
}

Action * ActionSetImpl::getNextAction(){
    return actions.at(lastTaken++);
}

int ActionSetImpl::getNumberOfActions(){
    return actions.size();
}