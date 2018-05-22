#ifndef ACTORIMPL_H
#define ACTORIMPL_H

#include "Actor.h"
#include "../domain/Character.h"
#include <string>

using namespace std;

class ActorImpl : public Actor {

public:
    ActorImpl(Character * character);
    string getName();
    string setName(string name);
    
private:
    Character * character;

};

#endif

