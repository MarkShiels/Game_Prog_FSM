#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>

class Animations
{
private:

	sf::Texture idleTexture;
	sf::Texture attackTexture;
	sf::Texture	jumpTexture;

	AnimatedSprite	idle_sprite;
	AnimatedSprite jump_sprite;
	AnimatedSprite attack_sprite;

public:

	Animations();
	
	AnimatedSprite	getIdleAnim();
	AnimatedSprite	getJumpAnim();
	AnimatedSprite	getAttackAnim();
	


};













#endif 