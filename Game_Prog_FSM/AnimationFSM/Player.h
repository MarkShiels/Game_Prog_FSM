#ifndef PLAYER_H
#define PLAYER_H

#include <Input.h>
#include <PlayerFSM.h>
#include <AnimatedSprite.h>

class Player
{
private:
	PlayerFSM m_state;
	AnimatedSprite m_animated_sprite;
	AnimatedSprite m_sprites[5];
	Player();

public:
	Player(const AnimatedSprite&);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void addSprite(AnimatedSprite t_sprite, int t_in);
	void handleInput(Input);
	void update();
};

#endif // !PLAYER_H
