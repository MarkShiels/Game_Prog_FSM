#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <WalkLeft.h>
#include <WalkRight.h>
#include <Special.h>
#include <string>

void Walk_Right::idle(PlayerFSM* a)
{
	std::cout << "Walk_Right -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walk_Right::jumping(PlayerFSM* a)
{
	std::cout << "Walk_Right -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Walk_Right::walkLeft(PlayerFSM* a)
{
	std::cout << "Walk_Right -> Walk_Left" << std::endl;
	a->setCurrent(new Walk_Left());
	delete this;
}
void Walk_Right::special(PlayerFSM* a)
{
	std::cout << "Walk_Right -> Special" << std::endl;
	a->setCurrent(new Special());
	delete this;
}