#ifndef __SCENE__
	#define __SCENE__
	#include "pl.hpp"

	class Scene
	{
	public:
		Scene();
		pl getPlayerLocation();

	private:
		pl _playerLocation;
	};

#endif