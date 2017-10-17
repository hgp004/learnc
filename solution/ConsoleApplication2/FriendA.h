#pragma once
#include "FriendB.h"
class FriendA
{
public:
	FriendA();
	~FriendA();
	friend void print(FriendA * a,FriendB * b,int i);
private:
	int A;
};

