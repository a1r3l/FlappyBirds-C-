#pragma once

#include <memory>
#include <string>
#include <SFML\Graphics.hpp>
#include "StateMachine.h"
#include "AssetManager.h"
#include "ImputManager.h"

namespace Aurel {

	struct gameData {
		StateMachine machine;
		sf::RenderWindow window;
		AssetManager assets;
		InputManager inputs;
	};

	typedef std::shared_ptr<gameData> GameDataRef;
	
	
	class Game {
	public:
		Game(int width, int heigth, std::string appName);
		Game() {}

	private:
		const float dt = 1.0f / 60.0f;
		sf::Clock _clock;
		GameDataRef _data = std::make_shared<gameData>();

		void Run();
	};
}