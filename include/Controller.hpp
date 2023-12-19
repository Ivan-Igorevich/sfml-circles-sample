#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_

#include "Canvas.hpp"

namespace scs
{
    class Controller
    {
    public:
        virtual ~Controller() = 0;
        virtual void onDrawCanvas(sf::RenderWindow* window, scs::Canvas c, sf::Time deltaTime) = 0;
    };
}

#endif
