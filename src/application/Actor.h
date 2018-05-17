#ifndef ACTOR_H
#define ACTOR_H

#include <string>

class Actor {

public:
    virtual std::string getName() = 0;
    virtual std::string setName(std::string name) = 0;
    
private:
    
};

#endif

