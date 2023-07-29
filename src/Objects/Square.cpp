#include "Square.hpp"

#include <iostream>

Square::Square(sf::Vector2f position)
	:
	pos(position)
{
	designSquare();
}

void Square::designSquare()
{
	square.setSize(sf::Vector2f(smallSize, smallSize));
	square.setFillColor(sf::Color(rand() % 255, rand() % 255, rand() % 255));
	square.setPosition(pos);
}