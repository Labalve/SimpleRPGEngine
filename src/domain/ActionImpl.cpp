#include "ActionImpl.h"
#include "ActionEffect.h"

ActionImpl::ActionImpl(std::string title, std::string description, ActionEffect * effect) {
    this->title = title;
    this->description = description;
    this->effectDescription = "Action " + title + " not completed yet.";
    performer = NULL;
    target = NULL;
}

std::string ActionImpl::getTitle() {
    return title;
}

void ActionImpl::becomeCompleted() {
    
    effect->doOtherEffects();
    effect->affectPerformer(performer);
    effect->affectTarget(target);
    effectDescription = effect->getLog();
}

void ActionImpl::setPerformer(Character * performer) {
    this->performer = performer;
}

void ActionImpl::setTarget(Character * target) {
    this->target = target;
}
std::string ActionImpl::getDescription() {
    return description;
}

std::string ActionImpl::getEffectDescription() {
    return effectDescription;
}