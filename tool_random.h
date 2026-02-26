#pragma once

#include "lib.h"

namespace tool
{
	static std::random_device rd;
	static std::mt19937 gen = std::mt19937(rd());

	int Randint(int min, int max);

	bool Randbool();
}