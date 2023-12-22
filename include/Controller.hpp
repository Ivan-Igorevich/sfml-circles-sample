#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_

#include "Canvas.hpp"

namespace scs
{
    class Canvas;

    class Controller
    {
    protected:
        ~Controller() = default;

    public:
        virtual void onDrawCanvas(sf::RenderWindow* window, scs::Canvas c, sf::Time deltaTime) = 0;
    };
}

#endif
