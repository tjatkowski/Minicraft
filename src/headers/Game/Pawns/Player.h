#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include "../Pawn.h"

class Player : public Pawn {
	int movingDirection;
	float velocity;
public:
	Player();
	virtual void update(const float &deltaTime);
	void input();
};

#endif PLAYER_H