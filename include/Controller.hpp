#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_

#include "Canvas.hpp"

namespace scs
{
    class Canvas;

    class Controller
    {
    public:
        virtual void onInitFrame() = 0;
        virtual void onDrawCanvas(sf::RenderWindow* window, scs::Canvas c, sf::Time deltaTime) = 0;
    };
}

#endif
