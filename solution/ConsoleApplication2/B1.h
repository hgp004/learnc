#pragma once
#include "B.h"
class B1:virtual public B
{
	//friend void print(B* pb);
public:
	B1();
	~B1();
	int c;
private:
	int b1;
};

