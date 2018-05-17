#ifndef SCENEIMPL_H
#define SCENEIMPL_H

#include "Actor.h"
#include "Scene.h"

class SceneImpl : public Scene {
public:
    SceneImpl();
    Actor * getActor(int actorIndex);
    int getActorCount();
    void setActor(Actor *);
private:
    Actor * actors[2];
    int actorCount;
};

#endif

