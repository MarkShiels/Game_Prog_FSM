#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <WalkLeft.h>
#include <WalkRight.h>
#include <Attacking.h>
#include <Special.h>
#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(PlayerFSM* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::walkLeft(PlayerFSM* a)
{
	std::cout << "Idle -> Walk Left" << std::endl;
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Walk_Left());
	delete this;
}

void Idle::walkRight(PlayerFSM* a)
{
	std::cout << "Idle -> Walk_Right" << std::endl;
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Walk_Right());
	delete this;
}

void Idle::attacking(PlayerFSM* a)
{
	std::cout << "Idle -> Attacking" << std::endl;
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Attacking());
	delete this;
}

void Idle::special(PlayerFSM* a)
{
	std::cout << "Idle -> Special" << std::endl;
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Special());
	delete this;
}