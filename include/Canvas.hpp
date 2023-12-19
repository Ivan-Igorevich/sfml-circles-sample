#ifndef CANVAS_HPP_
#define CANVAS_HPP_
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include <iostream>
#include "../include/ControllerImpl.hpp"

namespace scs
{
    class Canvas
    {
    private:
        sf::RenderWindow* parent;
    public:
        sf::Clock localTimer;
        scs::Controller* controller;

        Canvas(sf::RenderWindow* window);

        int getLeft();
        int getRight();
        int getTop();
        int getBottom();
    };
} // namespace scs

#endif
