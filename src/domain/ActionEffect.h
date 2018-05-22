#ifndef ACTIONEFFECT_H
#define ACTIONEFFECT_H

#include "Character.h"
#include <string>

class ActionEffect {
public:
    virtual void affectPerformer(Character * performer) = 0;
    virtual void affectTarget(Character * target) = 0;
    virtual void doOtherEffects() = 0;
    virtual std::string getLog() = 0;
};

#endif