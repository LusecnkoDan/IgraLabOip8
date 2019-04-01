#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(700, 700), "SD");

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Blue);

    Texture t;
    t.loadFromFile("GG.jpeg");

    Sprite s;
    s.setTexture(t);
    s.setPosition(50,100);


    while (window.isOpen())
    {
    sf::Event event;
    while (window.pollEvent(event))
    {
    if (event.type == sf::Event::Closed)
    window.close();
    }
    if (Keyboard::isKeyPressed(Keyboard::Left))
    {
        s.move(-0.1,0);
    }

    window.clear();
    window.draw(s);
    window.display();
    }
    return 0;
}
