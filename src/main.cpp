/*
Source code of DINOCHROME by MilMip
start 3.4.24

lib doc:
https://www.sfml-dev.org/tutorials/2.6/start-linux.php
https://www.sfml-dev.org/tutorials/2.6/

compil command:
cd bin && g++ -c ../src/*.cpp && g++ *.o -o prog -lsfml-graphics -lsfml-window -lsfml-system  && ./prog && cd .. || cd ..
*/

#include "../include/game_engine.hpp"

int main()
{
    GameEngine dinoChrome{"Hi, welcome to DionChrome!"};
    dinoChrome.run();
    return 0;
}