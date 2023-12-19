#ifndef BALL_HPP_
#define BALL_HPP_
#include <SFML/Graphics/Color.hpp>
#include <random>
#include "Sprite.hpp"

namespace scs
{
    class Ball : public Sprite
    {
        std::random_device rd{};
        std::mt19937 gen{rd()};
        std::uniform_int_distribution<uint8_t> nd{0, 255};

        sf::CircleShape* myShape;
        const sf::Color* color;
        float vX;
        float vY;

    public:
        Ball();
        Ball(int x, int y);

        virtual void onUpdate(scs::Canvas c, sf::Time deltaTime) override;
        virtual void onRender(sf::RenderWindow* window, scs::Canvas c) override;

    };
}

#endif