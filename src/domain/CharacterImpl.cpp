#include "CharacterImpl.h"

CharacterImpl::CharacterImpl(string id, string name, ActionSet * actionSet) {
    this->id = id;
    this->name = name;
    this->actionSet = actionSet;
}

string CharacterImpl::getID() {
    return id;
}

string CharacterImpl::getName() {
    return name;
}

ActionSet * CharacterImpl::getActionSet() {
    return actionSet;
}
