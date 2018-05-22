#ifndef ACTORIMPL_H
#define ACTORIMPL_H

#include <string>
#include "../domain/Character.h"
#include "../domain/ActionSet.h"
#include "Actor.h"

class ActorImpl : public Actor {

public:
    ActorImpl(Character * character);
    std::string getName();
    ActionSet * getActionSet();
    
private:
    Character * character;

};

#endif

