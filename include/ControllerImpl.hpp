#ifndef CONTROLLER_IMPL_HPP_
#define CONTROLLER_IMPL_HPP_
#include "Controller.hpp"
#include "Canvas.hpp"

namespace scs {
    class ControllerImpl : public Controller {
    private:
        void doUpdateObjects(scs::Canvas c, sf::Time deltaTime);
        void doRenderObjects(sf::RenderWindow* window, scs::Canvas c);
    public:
        ControllerImpl();
        void onDrawCanvas(sf::RenderWindow* window, scs::Canvas c, sf::Time deltaTime) override;
    };
}

#endif

/*
    private CommonObject[] objects = new CommonObject[1];
    private int objectsCount;

    private void initApplication() {
        addObjects(new Background());
    }
*/