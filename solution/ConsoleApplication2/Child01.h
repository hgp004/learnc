#pragma once
#include "Parent01.h"
class Child01:public Parent01
{
public:
	Child01();
	~Child01();
	void func(int a);
	void func(int a, int b);
};

