#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture idleTexture;
	sf::Texture attackTexture;

	if (!idleTexture.loadFromFile("assets\\Idle2.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	if (!attackTexture.loadFromFile("assets\\Attack1.png"))
	{
		DEBUG_MSG("Failed to load attack texture");
		return EXIT_FAILURE;
	}

	sf::RectangleShape line;
	line.setSize(sf::Vector2f(20, 100));
	line.setFillColor(sf::Color::Blue);
	line.setPosition(45, 20);

	// Setup Players Default Animated Sprite
	

	
	//Attack Animation
	AnimatedSprite attack_sprite(attackTexture);
	attack_sprite.addFrame(sf::IntRect(6, 3, 110, 125));
	attack_sprite.addFrame(sf::IntRect(190, 3, 110, 125));
	attack_sprite.addFrame(sf::IntRect(374, 3, 210, 125));
	attack_sprite.addFrame(sf::IntRect(558, 3, 210, 125));

	//Idle Animation
	AnimatedSprite idle_sprite(idleTexture);
	idle_sprite.addFrame(sf::IntRect(6, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(190, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(374, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(558, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(742, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(926, 3, 110, 125));

	// Setup the Player
	Player player(attack_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::LEFT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::RIGHT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::UP);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					input.setCurrent(Input::Action::DOWN);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
				{
					std::cout << "F" << std::endl;
					input.setCurrent(Input::Action::SPECIAL);
				}

				break;

			default:
			player.handleInput(input);
			input.setCurrent(Input::Action::IDLE);
			break;
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		//window.draw(line);

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};