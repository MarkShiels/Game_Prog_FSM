#include <PlayerFSM.h>
#include <Idle.h>

PlayerFSM::PlayerFSM()
{
	m_current = new Idle();
}

PlayerFSM::~PlayerFSM() {}

void PlayerFSM::setCurrent(State* s)
{
	m_current = s;
}

State* PlayerFSM::getCurrent()
{
	return m_current;
}

void PlayerFSM::setPrevious(State* s)
{
	m_previous = s;
}

State* PlayerFSM::getPrevious()
{
	return m_previous;
}

void PlayerFSM::idle()
{
	m_current->idle(this);
}

void PlayerFSM::jumping()
{
	m_current->jumping(this);
}

void PlayerFSM::climbing()
{
	m_current->climbing(this);
}

void PlayerFSM::walkLeft()
{
	m_current->walkLeft(this);
}

void PlayerFSM::walkRight()
{
	m_current->walkRight(this);
}

void PlayerFSM::attacking()
{
	m_current->attacking(this);
}

void PlayerFSM::special()
{
	m_current->special(this);
}

void PlayerFSM::addSprite(AnimatedSprite t_sprite, int t_in)
{
	animSprites[t_in] = t_sprite;
}