#ifndef ACTORHANDLERIMPL_H
#define ACTORHANDLERIMPL_H

#include "ActorHandler.h"
#include "../application/Actor.h"
#include "../application/Scene.h"
#include <vector>
#include <string>

using namespace std;

class ActorHandlerImpl : public ActorHandler {
public:
    ActorHandlerImpl(Scene * scene);
    vector<Actor *> getActors();
    Actor * getActor(int actorIndex);
    Actor * getActor(string name);
    void setActors();
private:
    vector<Actor *> actors;
    Scene * scene;
    
};

#endif
