#include "ActorHandlerImpl.h"

ActorHandlerImpl::ActorHandlerImpl(Scene * scene) {
    this->scene = scene;
    setActors();
}

void ActorHandlerImpl::setActors() {
    for(int i = 0; i < scene->getActorCount(); i++) {
        actors.push_back(scene->getActor(i));
    }
}

Actor * ActorHandlerImpl::getActor(int actorIndex) {
    return actors.at(actorIndex);
}

Actor * ActorHandlerImpl::getActor(string name) {
    for(int i = 0; i < actors.size(); i++) {
        if(actors.at(i)->getName() == name) return actors.at(i);
    }
}

vector<Actor *> ActorHandlerImpl::getActors() {
    return actors;
}
    void setActors(Scene * scene);