#ifndef CHARACTERIMPL_H
#define CHARACTERIMPL_H

#include "Character.h"
#include "ActionSetImpl.h"
#include <string>

using namespace std;

class CharacterImpl : public Character {
public:
    CharacterImpl(string id, string name, ActionSet * actionSet);
    string getID();
    string getName();
    ActionSet * getActionSet();
    
private:
    string id;
    string name;
    ActionSet * actionSet;
};

#endif

