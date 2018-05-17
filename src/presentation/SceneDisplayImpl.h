#ifndef SCENEDISPLAYIMPL_H
#define SCENEDISPLAYIMPL_H

#include <string>
#include <iostream>
#include "../application/Actor.h"
#include "../application/Scene.h"
#include "ActorHandlerImpl.h"

class SceneDisplayImpl {

public:
    SceneDisplayImpl(Scene * scene);
    void display();
    
private:
    Actor * getMainActor(int actorIndex);
    
    Scene * scene;
    ActorHandler * actorHandler;
    
};

#endif
