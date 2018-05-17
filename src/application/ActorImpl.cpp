#include "ActorImpl.h"

using namespace std;

ActorImpl::ActorImpl(string name) {
    this->name = name;
}

string ActorImpl::getName(){
    return this->name;
}

string ActorImpl::setName(string name) {
    this->name = name;
}