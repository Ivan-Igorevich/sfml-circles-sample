#include "../include/ControllerImpl.hpp"
#include "../include/Ball.hpp"

void scs::ControllerImpl::onDrawCanvas(sf::RenderWindow* window, scs::Canvas c, sf::Time deltaTime) {
    doUpdateObjects(c, deltaTime);
    doRenderObjects(window, c);
}

void scs::ControllerImpl::doUpdateObjects(const scs::Canvas &c, const sf::Time deltaTime) const {
    for (int i = 0; i < this->objectsCount; i++) {
        this->objects[i]->onUpdate(c, deltaTime);
    }
}

void scs::ControllerImpl::doRenderObjects(sf::RenderWindow* window, const scs::Canvas &c) const {
    for (int i = 0; i < this->objectsCount; i++) {
        this->objects[i]->onRender(window, c);
    }
}

void scs::ControllerImpl::onInitFrame() override {
    this->objects.insert(objects.begin(), new Ball());
    ++objectsCount;
}
