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
//#include "../include/sprites.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    Scene scene;
    std::cout << scene.getPlayerLocation() << std::endl;
    //scene.load()

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //scene.update()
        //scene.render()

        window.clear();
        window.display();
    }

    return 0;
}