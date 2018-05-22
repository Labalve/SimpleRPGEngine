#include "SceneDisplayImpl.h"

SceneDisplayImpl::SceneDisplayImpl(Scene * scene, ActorHandler * actorHandler) {
    this->scene = scene;
    this->actorHandler = actorHandler;
}

Actor * SceneDisplayImpl::getMainActor(){
    return actorHandler->getActor(0);
};

std::string printActionList(ActionSet * actionSet) {
    string list = "";
    for(int i = 0; i < actionSet->getNumberOfActions(); i++) {
         list += actionSet->getActions().at(i)->getName() + "\n";     
    }
    return list;
}

void SceneDisplayImpl::display() {
    std::cout<<getMainActor()->getName() << std::endl;
    std::cout<<printActionList(getMainActor()->getActionSet());
}

