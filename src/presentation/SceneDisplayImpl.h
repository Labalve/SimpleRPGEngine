#ifndef SCENEDISPLAYIMPL_H
#define SCENEDISPLAYIMPL_H

#include <string>
#include <iostream>
#include <vector>
#include "../application/Actor.h"
#include "../application/Scene.h"
#include "../domain/Action.h"
#include "../domain/ActionSet.h"
#include "ActorHandler.h"

class SceneDisplayImpl {

public:
    SceneDisplayImpl(Scene * scene, ActorHandler * actorHandler);
    void display();
    
private:
    Actor * getMainActor();
    vector<Actor *> getOtherActors();
    
    Scene * scene;
    ActorHandler * actorHandler;
    
};

#endif
