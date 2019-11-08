#include <Special.h>
#include <Idle.h>

#include <string>

void Special::idle(PlayerFSM* a)
{
	
	std::cout << "Special -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}