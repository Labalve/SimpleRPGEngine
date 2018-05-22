#include "UserActionHandlerImpl.h"

UserActionHandlerImpl::UserActionHandlerImpl(Scene * scene, ActorHandler * actorHandler) {
}

void UserActionHandlerImpl::setScene(Scene* scene) {
    this->scene = scene;
}

void UserActionHandlerImpl::prompt() {
    std::string log;
    std::cin >> log;
}
    

