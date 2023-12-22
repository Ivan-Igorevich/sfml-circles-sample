#include "../include/ControllerImpl.hpp"

scs::ControllerImpl::ControllerImpl() = default;

void scs::ControllerImpl::onDrawCanvas(sf::RenderWindow* window, scs::Canvas c, sf::Time deltaTime) {
    doUpdateObjects(c, deltaTime);
    doRenderObjects(window, c);
}

void scs::ControllerImpl::doUpdateObjects(scs::Canvas c, sf::Time deltaTime) {

}

void scs::ControllerImpl::doRenderObjects(sf::RenderWindow* window, scs::Canvas c) {

}


/*
    private void update(GameCanvas canvas, float deltaTime) {
        for (int i = 0; i < objectsCount; i++) {
            objects[i].update(canvas, deltaTime);
        }
    }

    private void render(GameCanvas canvas, Graphics g) {
        for (int i = 0; i < objectsCount; i++) {
            objects[i].render(canvas, g);
        }
    }

    @Override
    public void onDrawCanvas(GameCanvas c, Graphics g, float deltaTime) {
        update(c, deltaTime);
        render(c, g);
    }
    */