#ifndef WALK_LEFT_H
#define WALK_LEFT_H

#include <State.h>

class Walk_Left : public State
{
public:
	Walk_Left() {};
	~Walk_Left() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void walkRight(PlayerFSM* a);
};

#endif // !IDLE_H