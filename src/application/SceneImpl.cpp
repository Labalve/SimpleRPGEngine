#include "SceneImpl.h"

SceneImpl::SceneImpl() {
    actorCount = 0;
}

Actor * SceneImpl::getActor(int actorIndex) {
    return this->actors[actorIndex];
}

int SceneImpl::getActorCount() {
    return this->actorCount;
}

void SceneImpl::setActor(Actor * actor) {
    this->actors[this->actorCount++] = actor;
}