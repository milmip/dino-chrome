#ifndef __GE__
	#define __GE__
	#include "player_location.hpp"

	#include <string>
	#include <SFML/Graphics.hpp>

	class GameEngine
	{
	public:
		GameEngine() = delete;
		GameEngine(std::string helloMessage, int fps=30);
		
		void run();

	private:
		PlayerLocation _playerLocation;
		sf::Window _window;

	};

#endif