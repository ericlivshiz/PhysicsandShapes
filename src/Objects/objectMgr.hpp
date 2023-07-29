#pragma once

#include <SFML/Graphics.hpp>

#include "Circle.hpp"

#include "Square.hpp"

#include <mutex>

#include <iostream>

class ShapeMgr {
public:
	ShapeMgr();
	void manageShapes();

public:
	template <typename T>
	void InitializeShapes(int amount, std::vector<T>& shapeObjs) {
		for (int i = 0; i < amount; i++) {
			shapePos.x += 15;
			T shapeObj(shapePos);
			shapeObjs.push_back(shapeObj);
		}
	}

	template <typename T>
	static inline void updateShapePos(sf::Vector2f& pos, T& object)
	{
		object.getShape().setPosition(pos);
		/*object.getShape().setFillColor(sf::Color::Black);*/
		//std::cout << "Shape Position after changing: " << std::endl;
		//std::cout << "X-axis: " << object.getShape().getPosition().x;
		//std::cout << "Y-axis: " << object.getShape().getPosition().y;
		//std::cout << std::endl;
	}

	/*template <typename T>
	void EnablePhysics(std::vector<T>& shapeObjs) {
		for (int i = 0; i < shapeObjs.size(); i++)
		{
			sf::Vector2f pos = shapeObjs[i].getShape().getPosition();
			physics.randomMoveShape(shapeObjs[i]);
		}
	}*/

public:
	static inline std::vector<Circle> circleObjs;
	static inline std::vector<Square> squareObjs;

private:
	sf::Vector2f shapePos;
	std::mutex cinMutex; // Mutex to protect std::cin
};