#pragma once

#include "SFML/Graphics.hpp"

class Square {
public:
	Square(sf::Vector2f position);

public:
	sf::RectangleShape& getShape() { return square; }
	sf::Vector2f getSize() const { return square.getSize(); }
	sf::Vector2f& getVelocity() { return velocity; }

	void setVelocity(sf::Vector2f& vel) { this->velocity = vel; }
	void updatePosition(sf::Vector2f& pos) { this->pos = pos; }

public:
	sf::RectangleShape square;

private:
	void designSquare();

private:
	sf::Vector2f pos;
	sf::Vector2f velocity;

	const int smallSize = 15;
	static inline constexpr int mediumSize = 35;
	static inline constexpr int largeSize = 100;
};