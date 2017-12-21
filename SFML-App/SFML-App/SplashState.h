#pragma once
#include <SFML\Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace Aurel {

	class SplashState : public State {

	public:
		SplashState(GameDataRef data);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;
		sf::Clock _clock;
		sf::Texture _backgroundTExture;
		sf::Sprite _background;
		sf::Sound _sound;
	};
}