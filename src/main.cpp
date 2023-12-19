#include "../include/Canvas.hpp"

int main()
{
    auto window = sf::RenderWindow{{1280u, 768u}, "SFML Circles Sample"};
    window.setFramerateLimit(60);
    scs::Canvas canvas(&window);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        sf::Time elapsed = canvas.localTimer.restart();
        // std::cout << elapsed.asMicroseconds() << std::endl;
        canvas.controller->onDrawCanvas(&window, canvas, elapsed);
        window.display();
    }
}

scs::Canvas::Canvas(sf::RenderWindow* window) : parent(window) {
    controller = new ControllerImpl();
}
int scs::Canvas::getLeft()  { return 0; }
int scs::Canvas::getRight() { return parent->getSize().x - 1; }
int scs::Canvas::getTop() { return 0; }
int scs::Canvas::getBottom() { return parent->getSize().y - 1; }

