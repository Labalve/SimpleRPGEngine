#include "./headers/mainHeader.h"

int main() {
    Scene * mainScene = new SceneImpl();
    mainScene->setActor(new ActorImpl("test actor"));
    SceneDisplayImpl * sceneDisplay = new SceneDisplayImpl(mainScene);
    sceneDisplay->display();
    return 0;
}

