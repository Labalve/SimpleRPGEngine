#include "SceneDisplayImpl.h"

SceneDisplayImpl::SceneDisplayImpl(Scene * scene, ActorHandler * actorHandler) {
    this->scene = scene;
    this->actorHandler = actorHandler;
}

std::string printActionList(ActionSet * actionSet) {
    string list = "";
    for (int i = 0; i < actionSet->getNumberOfActions(); i++) {
        list += actionSet->getActions().at(i)->getName() + "\n";
    }
    return list;
}

void SceneDisplayImpl::display() {
    std::cout << getMainActor()->getName() << std::endl;
    std::cout << printActionList(getMainActor()->getActionSet()) << std::endl << std::endl;
    
    for(int i = 0; i < (actorHandler->getActorsCount() - 1); i++) {
        std::cout<< actorHandler->getOtherActors().at(i)->getName() << std::endl;
        std::cout<< printActionList(actorHandler->getOtherActors().at(i)->getActionSet()) << std::endl << std::endl;
    }
}

Actor * SceneDisplayImpl::getMainActor() {
    return actorHandler->getMainActor();
}
    

