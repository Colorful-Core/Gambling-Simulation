#include "tool_random.h"

int tool::Randint(int min, int max)
{
    std::uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}

bool tool::Randbool()
{
    int temp = Randint(0, 1);
    if (temp) return true;
    else return false;
}