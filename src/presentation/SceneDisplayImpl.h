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
    void setScene(Scene * scene);
    
private:
    Actor * getMainActor();
    vector<Actor *> getOtherActors();
    static std::string printActionList(ActionSet * actionSet);
    static std::string printActionList(vector<Action *> actionVector);
    
    Scene * scene;
    ActorHandler * actorHandler;
    
};

#endif
