#include "stdafx.h"
#include "dq.h"


dq::dq() :dw("hh")
{
	dqr = 5000;
}
dq::dq(int r) : dw("aa")
{
	dqr = r;
}

dq::~dq()
{
}
void dq::have()
{
	dw.say();
}