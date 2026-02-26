#include "tool_value.h"

bool tool::CheckHealth()
{
    if (data::healthValue > data::healthValueMax) data::healthValue = data::healthValueMax;

    if (data::healthValue <= 0) return true;
    else return false;
}

bool tool::CheckHappy()
{
    if (data::happyValue > data::happyValueMax) data::happyValue = data::happyValueMax;

    if (data::happyValue <= 0) return true;
    else return false;
}

bool tool::CheckMoney()
{
    if (data::money <= 0) return true;
    else return false;
}