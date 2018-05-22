#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include "../domain/ActionSet.h"

class Actor {

public:
    virtual std::string getName() = 0;
    virtual ActionSet * getActionSet() = 0;
    
};

#endif

