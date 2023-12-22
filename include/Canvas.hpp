#ifndef CANVAS_HPP_
#define CANVAS_HPP_
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include "../include/ControllerImpl.hpp"

namespace scs
{
    class Controller;

    class Canvas
    {
    private:
        sf::RenderWindow* parent;
    public:
        sf::Clock localTimer;
        scs::Controller* controller;

        explicit Canvas(sf::RenderWindow* window);

        static int getLeft();
        int getRight() const;

        static int getTop();
        int getBottom() const;
    };
} // namespace scs

#endif
