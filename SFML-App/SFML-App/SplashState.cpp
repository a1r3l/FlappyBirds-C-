#include "SplashState.h"
#include <sstream>
#include "Definitions.h"
#include <iostream>

namespace Aurel {
	
	SplashState::SplashState(GameDataRef data) {
		this->_data = data;
	}

	void SplashState::Init() {

		_data->assets.LoadTexture("SplashState", SPLASH_SCENE_BACKGROUND_FILEPATH);
		//_data->assets.LoadSound("SplashState", SPLASH_STATE_SOUND);

		this->_background.setTexture(this->_data->assets.GetTexture("SplashState"));
		//this->_sound = this->_data->assets.GetSound("SpalshState");
		//this->_sound.play();
	}

	void SplashState::HandleInput() {
		sf::Event event;
		while (_data->window.pollEvent(event)) {
			if (sf::Event::Closed == event.type) {
				_data->window.close();
			}
		}
	}
	
	void SplashState::Update(float dt) {
		if (_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME) {
			std::cout << "Go To Menu" << std::endl;
			//this->_sound.stop();
		}
	}

	void SplashState::Draw( float dt) {
		_data->window.clear();
		_data->window.draw(_background);
		_data->window.display();
	}

}

