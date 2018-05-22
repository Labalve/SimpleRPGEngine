#ifndef ACTIONEFFECTIMPL_H
#define ACTIONEFFECTIMPL_H

#include "ActionEffect.h"
#include <string>

class ActionEffectImpl : public ActionEffect {
public:
    ActionEffectImpl();
    void affectPerformer(Character * performer);
    void affectTarget(Character * target);
    void doOtherEffects();
    std::string getLog();
};

#endif

