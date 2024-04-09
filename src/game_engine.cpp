#include "../include/game_engine.hpp"
#include "../include/player_location.hpp"

#include <iostream>
#include <SFML/Graphics.hpp>

GameEngine::GameEngine(std::string helloMessage, int fps)
{
	std::cout << helloMessage << std::endl;

	_window.create(sf::VideoMode(800, 600), "My window");
	_window.setFramerateLimit(fps);

	_playerLocation = PlayerLocation::start;
}

void GameEngine::run()
{
	while(_window.isOpen())
	{
		sf::Event event;
		while (_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			_window.close();
		}
	}
}