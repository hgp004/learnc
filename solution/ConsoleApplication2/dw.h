#pragma once
class dw
{
public:
	char type[5];
	dw(char *p);
	dw(const dw &obj);
	static int age;
	void say();
	~dw();
};
