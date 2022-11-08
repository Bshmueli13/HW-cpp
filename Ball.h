#pragma once
class Ball
{
public:
	int size;
	char color[15];
	char type[15];
	void Bouncing(int count);
	void Throwing(int power);
	void Rolling(int momentum);
};
