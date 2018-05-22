#include "./headers/mainHeader.h"

#include <vector>

int main() {
    Scene * mainScene = new SceneImpl();
    vector<Action *> actionVector;
    actionVector.push_back(new ActionImpl());
    mainScene->setActor(new ActorImpl(new CharacterImpl("01", "John", new ActionSetImpl(actionVector))));
    SceneDisplayImpl * sceneDisplay = new SceneDisplayImpl(mainScene);
    sceneDisplay->display();
    return 0;
}

