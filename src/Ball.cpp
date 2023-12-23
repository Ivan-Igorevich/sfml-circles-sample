#include "../include/Ball.hpp"

scs::Ball::Ball()
{
    const uint8_t r = nd(gen);
    const uint8_t g = nd(gen);
    const uint8_t b = nd(gen);
    color = new sf::Color(r, g, b);
    vX = static_cast<float>(nd(gen) + 100);
    vY = static_cast<float>(nd(gen) + 100);
    halfHeight = 20 + static_cast<float>(nd(gen) % 50);
    halfWidth = halfHeight;
    myShape = new sf::CircleShape(halfHeight);
}

scs::Ball::Ball(const float x, const float y) : Ball()
{
    this->x = x;
    this->y = y;
}

void scs::Ball::onUpdate(const scs::Canvas& canvas, const sf::Time deltaTime)
{
    // in SFML can be replaced by move(float, float)
    x += vX * deltaTime.asSeconds();
    y += vY * deltaTime.asSeconds();

    if (getLeft() < canvas.getLeft())
    {
        setLeft(canvas.getLeft());
        vX = -vX;
    }
    if (getRight() > canvas.getRight())
    {
        setRight(canvas.getRight());
        vX = -vX;
    }
    if (getTop() < canvas.getTop())
    {
        setTop(canvas.getTop());
        vY = -vY;
    }
    if (getBottom() > canvas.getBottom())
    {
        setBottom(canvas.getBottom());
        vY = -vY;
    }
}

void scs::Ball::onRender(sf::RenderWindow *window, const scs::Canvas& c)
{
    myShape->setFillColor(*color);
    myShape->setPosition(x, y);
    window->draw(*myShape);
}
