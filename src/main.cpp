#include "./headers/mainHeader.h"

#include <iostream>

#include <vector>

int main() {
    Scene * mainScene = new SceneImpl();
    vector<Action *> actionVector;
    actionVector.push_back(new ActionImpl("action 01"));
    actionVector.push_back(new ActionImpl("action 02"));
    actionVector.push_back(new ActionImpl("action 03"));
    mainScene->setActor(new ActorImpl(new CharacterImpl("01", "John", new ActionSetImpl(actionVector))));
    SceneDisplayImpl * sceneDisplay = new SceneDisplayImpl(mainScene, new ActorHandlerImpl(mainScene));
    sceneDisplay->display();
    return 0;
}

