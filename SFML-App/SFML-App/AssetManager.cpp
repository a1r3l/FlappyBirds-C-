#include "AssetManager.h"

namespace Aurel {
	
	void AssetManager() {}

	void AssetManager::LoadTexture( std::string name, std::string fileName) {
		sf::Texture texture;

		if (texture.loadFromFile(fileName)) {
			this->_textures[name] = texture;
		}
	}

	sf::Texture &AssetManager::GetTexture(std::string name) {
		return this->_textures.at(name);
	}

	void AssetManager::LoadFont(std::string name, std::string fileName) {
		sf::Font font;

		if (font.loadFromFile(fileName)) {
			this->_fonts[name] = font;
		}
	}

	sf::Font &AssetManager::GetFont(std::string name) {
		return this->_fonts.at(name);
	}

	void AssetManager::LoadSound(std::string name, std::string fileName) {
		sf::SoundBuffer buffer;
		sf::Sound sound;

		if (buffer.loadFromFile(fileName)) {
			sound.setBuffer(buffer);
			this->_sound[name] = sound;
		}
	}

	sf::Sound &AssetManager::GetSound(std::string name) {
		return this->_sound.at(name);
	}
}