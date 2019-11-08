#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void handleInput();
	void update();
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void walkLeft(PlayerFSM* a);
	void walkRight(PlayerFSM* a);
	void attacking(PlayerFSM* a);
	void special(PlayerFSM* a);
};

#endif // !IDLE_H