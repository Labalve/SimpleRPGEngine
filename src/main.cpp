#include "./headers/mainHeader.h"

#include <iostream>
#include <vector>

int main() {
    Scene * mainScene = new SceneImpl();
    vector<Action *> actionVector;
    actionVector.push_back(new ActionImpl("action 01", "Test action 01", new ActionEffectImpl()));
    actionVector.push_back(new ActionImpl("action 02", "Test action 02", new ActionEffectImpl()));
    actionVector.push_back(new ActionImpl("action 03", "Test action 03", new ActionEffectImpl()));
    vector<Action *> actionVector2;
    actionVector2.push_back(new ActionImpl("action 04", "Test action 04", new ActionEffectImpl()));
    actionVector2.push_back(new ActionImpl("action 05", "Test action 05", new ActionEffectImpl()));
    mainScene->setActor(new ActorImpl(new CharacterImpl("01", "Ivan", new ActionSetImpl(actionVector))));
    mainScene->setActor(new ActorImpl(new CharacterImpl("02", "John", new ActionSetImpl(actionVector2))));
    ActorHandler * actorHandler = new ActorHandlerImpl(mainScene);
    SceneDisplayImpl * sceneDisplay = new SceneDisplayImpl(mainScene, actorHandler);
    UserActionHandlerImpl * userActionHandler = new UserActionHandlerImpl(mainScene, actorHandler);
    sceneDisplay->display();
    userActionHandler->prompt();
    sceneDisplay->display();
    return 0;
}

