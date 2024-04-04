/*
Source code of DINOCHROME by MilMip
start 3.4.24

lib doc:
https://www.sfml-dev.org/tutorials/2.6/start-linux.php
https://www.sfml-dev.org/tutorials/2.6/

compil command:
cd bin && g++ -c ../src/*.cpp && g++ *.o -o prog -lsfml-graphics -lsfml-window -lsfml-system  && ./prog && cd .. || cd ..
*/

#include <iostream>
#include <SFML/Graphics.hpp>

#include "../include/scene.hpp"
#include "../include/sprite.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    Scene s;
    Sprite sp;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    std::cout << "loaded\n";

    return 0;
}