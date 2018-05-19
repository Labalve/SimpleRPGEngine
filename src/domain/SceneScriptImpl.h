#ifndef SCRIPTIMPL_H
#define SCRIPTIMPL_H

#include "SceneScript.h"
#include "Character.h"
#include "Location.h"
#include <vector>

using namespace std;

class SceneScriptImpl : public SceneScript {
public:
    SceneScriptImpl();
   
private:
    vector<Character *> character;
    Location * location;
};

#endif

