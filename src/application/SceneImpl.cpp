#include "SceneImpl.h"

SceneImpl::SceneImpl() {
}

Actor * SceneImpl::getActor(int actorIndex) {
    return this->actors.at(actorIndex);
}

int SceneImpl::getActorCount() {
    return static_cast<int>(actors.size());
}

void SceneImpl::setActor(Actor * actor) {
    this->actors.push_back(actor);
}