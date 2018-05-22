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
    for(int i = 0; i < static_cast<int>(actors.size()); i++) {
        if(actors.at(i)->getName() == name) return actors.at(i);
    }
}

vector<Actor *> ActorHandlerImpl::getActors() {
    return actors;
}

vector<Actor *> ActorHandlerImpl::getOtherActors() {
    vector<Actor *> otherActors;
    for(int i = 1; i < getActorsCount(); i++){
        otherActors.push_back(getActor(i));
    }
    return otherActors;
}

Actor * ActorHandlerImpl::getMainActor() {
    return getActor(0);
};

int ActorHandlerImpl::getActorsCount() {
    return static_cast<int>(actors.size());
}