#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::addSprite(AnimatedSprite t_sprite, int t_in)
{
	m_sprites[t_in] = t_sprite;

}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_state.idle();
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		m_state.jumping();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Walking Left" << std::endl;
		m_state.walkLeft();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Walking Right" << std::endl;
		m_state.walkRight();
		break;
	case Input::Action::DOWN:
		//std::cout << "Player attacking" << std::endl;
		m_state.attacking();
		break;
	case Input::Action::SPECIAL:
		std::cout << "Special" << std::endl;
		m_state.special();
		break;
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}