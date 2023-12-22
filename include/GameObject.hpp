#ifndef GAME_OBJECT_HPP_
#define GAME_OBJECT_HPP_

#include "Canvas.hpp"

namespace scs
{
    class GameObject
    {
    protected:
        ~GameObject() = default;

    public:
        virtual void onUpdate(scs::Canvas c, sf::Time deltaTime) = 0;
        virtual void onRender(sf::RenderWindow* window, scs::Canvas c) = 0;
    };
}

#endif
