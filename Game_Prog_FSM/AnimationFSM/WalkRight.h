#ifndef WALK_RIGHT_H
#define WALK_RIGHT_H

#include <State.h>

class Walk_Right : public State
{
public:
	Walk_Right() {};
	~Walk_Right() {};
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void walkLeft(PlayerFSM* a);
	void special(PlayerFSM* a);
};

#endif // !IDLE_H