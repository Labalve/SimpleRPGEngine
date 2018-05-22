#include "ActionEffectImpl.h"

#include <iostream>

ActionEffectImpl::ActionEffectImpl() {
}

void ActionEffectImpl::affectPerformer(Character * performer) {

};

void ActionEffectImpl::affectTarget(Character * target) {

};

void ActionEffectImpl::doOtherEffects() {
    std::cout<<"test effect!";
};

std::string ActionEffectImpl::getLog() {
    return "test_log";
};