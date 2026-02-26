#pragma once

#include "lib.h"

namespace tool
{
	class Timer
	{
	public:
		Timer();

		void Reset();

		bool Check(clock_t interval);
	private:
		clock_t _last;
	};
}