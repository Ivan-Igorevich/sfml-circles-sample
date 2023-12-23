#ifndef GAME_OBJECT_HPP_
#define GAME_OBJECT_HPP_

#include "Canvas.hpp"

namespace scs
{
    class GameObject
    {
    public:
        virtual void onUpdate(const scs::Canvas& c, sf::Time deltaTime) = 0;
        virtual void onRender(sf::RenderWindow* window, const scs::Canvas& c) = 0;
    };
}

#endif
