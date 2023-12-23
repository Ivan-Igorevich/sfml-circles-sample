#ifndef BALL_HPP_
#define BALL_HPP_
#include <SFML/Graphics/Color.hpp>
#include <random>
#include "Sprite.hpp"

namespace scs
{
    class Ball final : public Sprite
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
        Ball(float x, float y);

        void onUpdate(const scs::Canvas& canvas, sf::Time deltaTime) override;
        void onRender(sf::RenderWindow* window, const scs::Canvas& c) override;

    };
}

#endif