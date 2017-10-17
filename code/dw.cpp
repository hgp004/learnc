#include "stdafx.h"
#include "dw.h"



dw::dw(char *p)
{
	for (int i = 0; i < sizeof(type) / 1; i++)
	{
		if (*(p + i) == '\0')
		{
			type[i] = *(p + i);
			break;
		}
		if (i == sizeof(type) - 1)
		{
			type[i] = '\0';
		}
		else
		{
			type[i] = *(p + i);
		}
	}
}

dw::~dw()
{
}
void dw::say()
{
	printf("%s", type);
}
dw::dw(const dw &obj)
{
	for (int i = 0; i < 5; i++)
	{
		this->type[i] = obj.type[i];
	}
}