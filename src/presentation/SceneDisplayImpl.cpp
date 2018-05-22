#include "SceneDisplayImpl.h"

SceneDisplayImpl::SceneDisplayImpl(Scene * scene, ActorHandler * actorHandler) {
    this->scene = scene;
    this->actorHandler = actorHandler;
}

 std::string SceneDisplayImpl::printActionList(ActionSet * actionSet) {
    string list = "";
    for (int i = 0; i < actionSet->getNumberOfActions(); i++) {
        list += actionSet->getActions().at(i)->getTitle() + "\n";
    }
    return list;
}

void SceneDisplayImpl::display() {
    std::cout << "player Character: " + getMainActor()->getName() << std::endl;
    for(int i = 1; i < actorHandler->getActorsCount(); i++) {
        std::cout<< "other Character: " + actorHandler->getActor(i)->getName() << std::endl;
    }
    for(int i = 0; i < (actorHandler->getActorsCount()); i++) {
        std::cout<< printActionList(actorHandler->getActor(i)->getActionSet()) << std::endl;
    }
}

void SceneDisplayImpl::setScene(Scene* scene) {
    this->scene = scene;
    display();
}

Actor * SceneDisplayImpl::getMainActor() {
    return actorHandler->getMainActor();
}
    

