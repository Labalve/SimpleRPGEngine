#ifndef USERACTIONHANDLERIMPL_H
#define USERACTIONHANDLERIMPL_H

#include <string>
#include <iostream>
#include <vector>
#include "../application/Actor.h"
#include "../application/Scene.h"
#include "../domain/Action.h"
#include "../domain/ActionSet.h"
#include "ActorHandler.h"

class UserActionHandlerImpl {
public:
    UserActionHandlerImpl(Scene * scene, ActorHandler * actorHandler);
    void prompt();
    void setScene(Scene * scene);
    
private:
    Scene * scene;
    ActorHandler * actorHandler;
    
};


#endif

