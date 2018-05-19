#ifndef SCRIPTIMPL_H
#define SCRIPTIMPL_H

#include <vector>
#include "Script.h"
#include "SceneScript.h"

class ScriptImpl : public Script{
public:
    ScriptImpl();

private:
    vector<SceneScript *> sceneScripts;
    
};

#endif

