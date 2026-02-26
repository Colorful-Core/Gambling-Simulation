#include "tool_achievement.h"

void tool::CheckAchievement()
{
	if (data::money == 1) data::achievementList[0] = 1;

	if (data::money >= 1000) data::achievementList[1] = 1;

	if (data::money >= 10000) data::achievementList[2] = 1;

	if (data::money >= 5000000) data::achievementList[3] = 1;

	if (data::money >= 10000000) data::achievementList[4] = 1;

	if (data::money >= 100000000) data::achievementList[5] = 1;
}