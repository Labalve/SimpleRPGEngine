#ifndef ACTORIMPL_H
#define ACTORIMPL_H

#include "Actor.h"
#include <string>

using namespace std;

class ActorImpl : public Actor {

public:
    ActorImpl(string name);
    string getName();
    string setName(string name);
    
private:
    string name;

};

#endif

