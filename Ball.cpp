#include <iostream>
#include "Ball.h"


void Ball::Bouncing(int count)
{
	size -= count / 3;
}

void Ball::Throwing(int power)
{
	size += power;
}

void Ball::Rolling(int momentum)
{
	size += momentum;
}
