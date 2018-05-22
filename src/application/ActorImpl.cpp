#include "ActorImpl.h"

using namespace std;

ActorImpl::ActorImpl(Character * character) {
    this->character = character;
}

string ActorImpl::getName(){
    return character->getName();
}

ActionSet * ActorImpl::getActionSet(){
    return character->getActionSet();
}
