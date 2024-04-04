#include "../include/sprite.hpp"
#include <iostream>

Sprite::Sprite()
{
	std::cout << "Création d'un " << this << "\n";
}

Sprite::~Sprite()
{
	std::cout << "Destruction d'un " << this << "\n";
}