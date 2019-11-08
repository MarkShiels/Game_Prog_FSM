#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <WalkLeft.h>
#include <WalkRight.h>
#include <string>

void Walk_Left::idle(PlayerFSM* a)
{
	std::cout << "Walk_Left -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walk_Left::jumping(PlayerFSM* a)
{
	std::cout << "Walk_Left -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Walk_Left::walkRight(PlayerFSM* a)
{
	std::cout << "Walk_Left -> Walk_Right" << std::endl;
	a->setCurrent(new Walk_Right());
	delete this;
}