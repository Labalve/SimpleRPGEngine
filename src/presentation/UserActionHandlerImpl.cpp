#include "UserActionHandlerImpl.h"

#include <iostream>

UserActionHandlerImpl::UserActionHandlerImpl(Scene * scene, ActorHandler * actorHandler) {
}

void UserActionHandlerImpl::setScene(Scene* scene) {
    this->scene = scene;
}

void UserActionHandlerImpl::prompt() {
    int decision;
    std::cin >> decision;
    // TO-DO: For some reason ActorHandlerImpl.getActorsAction works fine in SceneDisplayImpl, but in UserActionHandlerImpl not. Find out why.
    Action * pickedAction = actorHandler->getActorsActions().at(decision);
    //pickedAction->becomeCompleted();
}
    

