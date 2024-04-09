#include "../include/scene.hpp"
#include "../include/pl.hpp"

Scene::Scene()
{
	_playerLocation = pl::start;
}

pl Scene::getPlayerLocation()
{
	return _playerLocation;
}