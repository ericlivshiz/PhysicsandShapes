#pragma once

#include "SFML/Graphics.hpp"

class Circle {
public:
	Circle(sf::Vector2f position);

public:
	sf::CircleShape& getShape() { return circle; }
	float getRadius() const { return circle.getRadius(); }
	sf::Vector2f& getVelocity() { return velocity; }

	void setVelocity(sf::Vector2f& vel) { this->velocity = vel; }
	void updatePosition(sf::Vector2f& pos) { this->pos = pos; }
	

public:
	sf::CircleShape circle;

private:
	void designCircle();

private:
	sf::Vector2f pos;
	sf::Vector2f velocity;

	const int smallRadius = 5;
	static inline constexpr int mediumRadius = 35;
	static inline constexpr int largeRadius = 100;
};