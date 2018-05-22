#ifndef ACTIONIMPL_H
#define ACTIONIMPL_H

#include "Action.h"
#include "ActionEffect.h"
#include <string>

class ActionImpl : public Action{
public:
    ActionImpl(std::string title, std::string description, ActionEffect * effect);
    std::string getTitle(); 
    std::string getDescription(); 
    std::string getEffectDescription(); 
    void becomeCompleted();
    void setPerformer(Character * performer);
    void setTarget(Character * target);
    
private:
    std::string title;
    std::string description;
    std::string effectDescription;
    Character * performer;
    Character * target;
    ActionEffect * effect;
};

#endif

