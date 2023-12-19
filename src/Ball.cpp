#include "../include/Ball.hpp"

scs::Ball::Ball()
{
    uint8_t r = nd(gen);
    uint8_t g = nd(gen);
    uint8_t b = nd(gen);
    color = new sf::Color(r, g, b);
    vX = 100 + nd(gen);
    vY = 100 + nd(gen);
    halfHeight = 20 + (float)(nd(gen) % 50);
    halfWidth = halfHeight;
    myShape = new sf::CircleShape(halfHeight);
}

scs::Ball::Ball(int x, int y) : Ball()
{
    this->x = x;
    this->y = y;
}

void scs::Ball::onUpdate(scs::Canvas canvas, sf::Time deltaTime)
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

void scs::Ball::onRender(sf::RenderWindow *window, scs::Canvas c)
{
    myShape->setFillColor(*color);
    myShape->setPosition(x, y);
    window->draw(*myShape);
}
