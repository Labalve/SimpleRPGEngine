#ifndef SCENE_H
#define SCENE_H

class Scene {
public:
    virtual Actor * getActor(int actorIndex) = 0;
    virtual int getActorCount() = 0;
    virtual void setActor(Actor * actor) = 0;
};

#endif

