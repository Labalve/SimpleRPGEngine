#include "SceneDisplayImpl.h"

SceneDisplayImpl::SceneDisplayImpl(Scene * scene) {
    this->scene = scene;
    this->actorHandler = new ActorHandlerImpl(scene);
}

Actor * SceneDisplayImpl::getMainActor(){
    return actorHandler->getActor(0);
};

void SceneDisplayImpl::display() {
    std::cout<<this->getMainActor()->getName();
}

