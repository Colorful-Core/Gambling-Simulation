#include "tool_Timer.h"

tool::Timer::Timer()
{
	_last = clock();
}

void tool::Timer::Reset()
{
	_last = clock();
}

bool tool::Timer::Check(clock_t interval)
{
	if (clock() >= _last + interval)
	{
		_last = clock();
		return true;
	}
	else return false;
}