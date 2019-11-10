#include "Animations.h"

Animations::Animations()
{

	if (!idleTexture.loadFromFile("assets\\Idle2.png")) {
		DEBUG_MSG("Failed to load file");
	}

	if (!attackTexture.loadFromFile("assets\\Attack1.png"))
	{
		DEBUG_MSG("Failed to load attack texture");
	}

	if (!jumpTexture.loadFromFile("assets\\Jump.png"))
	{
		DEBUG_MSG("Failed to load jump texture");
	}
	
	//attack animation
	attack_sprite.setTexture(attackTexture);
	attack_sprite.addFrame(sf::IntRect(6, 3, 110, 125));
	attack_sprite.addFrame(sf::IntRect(190, 3, 110, 125));
	attack_sprite.addFrame(sf::IntRect(374, 3, 210, 125));
	attack_sprite.addFrame(sf::IntRect(558, 3, 210, 125));

	//Idle Animation
	idle_sprite.setTexture(idleTexture);
	idle_sprite.addFrame(sf::IntRect(6, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(190, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(374, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(558, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(742, 3, 110, 125));
	idle_sprite.addFrame(sf::IntRect(926, 3, 110, 125));

	////Jump Animation
	jump_sprite.setTexture(jumpTexture);
	jump_sprite.addFrame(sf::IntRect(6, 3, 110, 125));
	jump_sprite.addFrame(sf::IntRect(190, 3, 110, 125));
}

AnimatedSprite Animations::getIdleAnim()
{
	return idle_sprite;
}

AnimatedSprite Animations::getJumpAnim()
{
	return jump_sprite;
}

AnimatedSprite Animations::getAttackAnim()
{
	return attack_sprite;
}


