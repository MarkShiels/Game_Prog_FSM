#include <Attacking.h>
#include <Idle.h>

#include <string>

void Attacking::idle(PlayerFSM* a)
{
	std::cout << "Attacking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}