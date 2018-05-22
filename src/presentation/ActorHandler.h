#ifndef ACTORHANDLER_H
#define ACTORHANDLER_H

#include <string>
#include <vector>
#include "../application/Actor.h"
#include "../application/Scene.h"

using namespace std;

class ActorHandler {
public:
    virtual Actor * getActor(int) = 0;
    virtual Actor * getActor(string) = 0;
    virtual vector<Actor *> getActors() = 0;
    virtual int getActorsCount() = 0;
    virtual vector<Actor *> getOtherActors() = 0;
    virtual Actor * getMainActor() = 0;

};

#endif

