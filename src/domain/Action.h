#ifndef ACTION_H
#define ACTION_H

#include <string>
#include "Character.h"

class Character;

class Action {
    
public:
    virtual std::string getTitle() = 0;
    virtual void becomeCompleted() = 0;
    virtual void setTarget(Character * targer) = 0;
    virtual void setPerformer(Character * performer) = 0;
    virtual std::string getDescription() = 0;
    virtual std::string getEffectDescription() = 0;
};

#endif