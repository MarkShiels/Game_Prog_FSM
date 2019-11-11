#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>

#include <string>

void Jumping::idle(PlayerFSM* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::climbing(PlayerFSM* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setPrevious(a->getCurrent());
	a->setCurrent(new Climbing());
	delete this;
}