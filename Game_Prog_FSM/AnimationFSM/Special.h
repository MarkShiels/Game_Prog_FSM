#ifndef SPECIAL_H
#define SPECIAL_H

#include <State.h>

class Special : public State
{
public:

	Special() {};
	~Special() {};

	void idle(PlayerFSM* a);
};

#endif // !IDLE_H

