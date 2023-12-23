#ifndef CONTROLLER_IMPL_HPP_
#define CONTROLLER_IMPL_HPP_

#include "Controller.hpp"
#include "Canvas.hpp"
#include "GameObject.hpp"

namespace scs {
    class ControllerImpl final : public Controller {
        void doUpdateObjects(const scs::Canvas &c, sf::Time deltaTime) const;
        void doRenderObjects(sf::RenderWindow* window, const scs::Canvas &c) const;

        std::vector<scs::GameObject*> objects{};
        int objectsCount{};

    public:
        void onInitFrame() override;
        void onDrawCanvas(sf::RenderWindow* window, scs::Canvas c, sf::Time deltaTime) override;
    };
}

#endif
