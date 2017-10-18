#include "stdafx.h"
#include "Parent01.h"


Parent01::Parent01()
{
}


Parent01::~Parent01()
{
}
void Parent01::func()
{
	printf("Parent01::func\n");
}
void Parent01::func(int a)
{
	printf("Parent01::func(int a)\n");
}
void Parent01::func(int a, int b)
{
	printf("Parent01::func(int a,int b)\n");
}