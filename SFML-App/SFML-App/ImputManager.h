#pragma once
#include <SFML/Graphics.hpp>

namespace Aurel {

	class InputManager {
	
	public:
		
		InputManager() {}
		~InputManager() {}

		bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button, sf::RenderWindow &window);
		sf::Vector2i GetMousePosition(sf::RenderWindow &window);

	private:
	
	};
}