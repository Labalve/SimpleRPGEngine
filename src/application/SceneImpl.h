#ifndef SCENEIMPL_H
#define SCENEIMPL_H

#include "Actor.h"
#include "Scene.h"
#include <vector>


using namespace std;

class SceneImpl : public Scene {
public:
    SceneImpl();
    Actor * getActor(int actorIndex);
    int getActorCount();
    void setActor(Actor *);
    vector<Actor *> actors;
private:
};

#endif

