#include "Circle.hpp"

#include <iostream>

Circle::Circle(sf::Vector2f position)
	:
	pos(position)
{
	designCircle();
}

void Circle::designCircle() 
{
	circle.setRadius(smallRadius);
	circle.setFillColor(sf::Color(rand() % 255, rand() % 255, rand() % 255));
	circle.setPosition(pos);
}