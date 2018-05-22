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
 
 std::string SceneDisplayImpl::printActionList(vector<Action *> actionVector) {
    string list = "";
    for (int i = 0; i < static_cast<int>(actionVector.size()); i++) {
        list += actionVector.at(i)->getTitle() + "\n";
    }
    return list;
}

void SceneDisplayImpl::display() {
    std::cout << "player Character: " + getMainActor()->getName() << std::endl;
    for(int i = 1; i < actorHandler->getActorsCount(); i++) {
        std::cout<< "other Character: " + actorHandler->getActor(i)->getName() << std::endl;
    }
    std::cout<<printActionList(actorHandler->getActorsActions());
}

void SceneDisplayImpl::setScene(Scene* scene) {
    this->scene = scene;
    display();
}

Actor * SceneDisplayImpl::getMainActor() {
    return actorHandler->getMainActor();
}
    

