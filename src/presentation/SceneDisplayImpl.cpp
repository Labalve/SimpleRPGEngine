#include "SceneDisplayImpl.h"

SceneDisplayImpl::SceneDisplayImpl(Scene * scene) {
    this->scene = scene;
    this->actorHandler = new ActorHandlerImpl(scene);
}

Actor * SceneDisplayImpl::getMainActor(int actorIndex){
    return actorHandler->getActor(actorIndex);
    //return scene->getActor(actorIndex);
};

void SceneDisplayImpl::display() {
    std::cout<<this->getMainActor(0)->getName();
}

