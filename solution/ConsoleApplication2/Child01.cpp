#include "stdafx.h"
#include "Child01.h"


Child01::Child01()
{
}


Child01::~Child01()
{
}
//void Child01::func()
//{
//	printf("Child01::func()\n");
//}
void Child01::func(int a)
{
	printf("Child01::func(int a)\n");
}
void Child01::func(int a, int b)
{
	printf("Child01::func(int a,int b)\n");
}