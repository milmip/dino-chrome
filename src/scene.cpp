#include "../include/scene.hpp"
#include <iostream>

Scene::Scene()
{
	std::cout << "Création d'une " << this << "\n";
}

Scene::~Scene()
{
	std::cout << "Destruction d'une " << this << "\n";
}