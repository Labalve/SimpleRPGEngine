#include "ActionImpl.h"

ActionImpl::ActionImpl(std::string name) {
    this->name = name;
}

std::string ActionImpl::getName() {
    return name;
}