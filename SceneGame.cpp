#include "SceneManager.h"

void SceneGame::Init()
{
	_level = 0;
	_input.clear();
}

void SceneGame::Render()
{
	system("cls");
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "金钱 : " << data::money << std::endl;
	std::cout << "饥饿值 : " << data::healthValue << "/" << data::healthValueMax << std::endl;
	std::cout << "快乐值 : " << data::happyValue << "/" << data::happyValueMax << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	if (_level == -1)
	{
		std::cout << "\033[0;31;40m错误 : 输入异常\033[0m" << std::endl;
	}
	else if (_level == 0)
	{
		std::cout << "1 --> 抛硬币" << std::endl;
		std::cout << "2 --> 猜拳" << std::endl;
		std::cout << "3 --> 简单猜数字" << std::endl;
		std::cout << "4 --> 中级猜数字" << std::endl;
		std::cout << "5 --> 困难猜数字" << std::endl;
		std::cout << "6 --> 极限猜数字" << std::endl;
		std::cout << "7 --> 终极考验" << std::endl;
		std::cout << "8 --> 返回菜单" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "请输入: ";
	}
	else if (_level == 1.1)
	{
		std::cout << "当前游戏 : 抛硬币" << std::endl;
		std::cout << "玩法 : 猜硬币正反, 猜对获得1倍金额" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "下注金额: ";
	}
	else if (_level == 1.2)
	{
		std::cout << "1 --> ■" << std::endl;
		std::cout << "2 --> □" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "正还是反: ";
	}
	else if (_level == 1.3)
	{
		if (isWin)
		{
			std::cout << "\033[0;32;40m恭喜, 你猜对了!\033[0m" << std::endl;
		}
		else
		{
			std::cout << "\033[0;31;40m你猜错了!\033[0m" << std::endl;
		}
	}
	else if (_level == 2.1)
	{
		std::cout << "当前游戏 : 猜拳" << std::endl;
		std::cout << "玩法 : 石头剪刀布(平局也算输), 胜利获得2倍金额" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "下注金额: ";
	}
	else if (_level == 2.2)
	{
		std::cout << "1 --> 石头" << std::endl;
		std::cout << "2 --> 剪刀" << std::endl;
		std::cout << "3 --> 布" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "出拳: ";
	}
	else if (_level == 2.3)
	{
		if (isWin)
		{
			std::cout << "\033[0;32;40m恭喜, 你赢了!\033[0m" << std::endl;
		}
		else
		{
			std::cout << "\033[0;31;40m你输了!\033[0m" << std::endl;
		}
	}
	else if (_level == 3.1)
	{
		std::cout << "当前游戏 : 简单猜数字" << std::endl;
		std::cout << "玩法 : 在1~3中猜1个数字, 胜利获得2倍金额" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "下注金额: ";
	}
	else if (_level == 3.2)
	{
		std::cout << "在1~3中猜1个数字" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "猜一个整数: ";
	}
	else if (_level == 3.3)
	{
		if (isWin)
		{
			std::cout << "\033[0;32;40m恭喜, 你猜对了!\033[0m" << std::endl;
		}
		else
		{
			std::cout << "\033[0;31;40m你猜错了!\033[0m" << std::endl;
		}
	}
	else if (_level == 4.1)
	{
		std::cout << "当前游戏 : 中级猜数字" << std::endl;
		std::cout << "玩法 : 在1~5中猜1个数字, 胜利获得3倍金额" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "下注金额: ";
	}
	else if (_level == 4.2)
	{
		std::cout << "在1~5中猜1个数字" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "猜一个整数: ";
	}
	else if (_level == 4.3)
	{
		if (isWin)
		{
			std::cout << "\033[0;32;40m恭喜, 你猜对了!\033[0m" << std::endl;
		}
		else
		{
			std::cout << "\033[0;31;40m你猜错了!\033[0m" << std::endl;
		}
	}
	else if (_level == 5.1)
	{
		std::cout << "当前游戏 : 困难猜数字" << std::endl;
		std::cout << "玩法 : 在1~7中猜1个数字, 胜利获得6倍金额" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "下注金额: ";
	}
	else if (_level == 5.2)
	{
		std::cout << "在1~7中猜1个数字" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "猜一个整数: ";
	}
	else if (_level == 5.3)
	{
		if (isWin)
		{
			std::cout << "\033[0;32;40m恭喜, 你猜对了!\033[0m" << std::endl;
		}
		else
		{
			std::cout << "\033[0;31;40m你猜错了!\033[0m" << std::endl;
		}
	}
	else if (_level == 6.1)
	{
		std::cout << "当前游戏 : 极限猜数字" << std::endl;
		std::cout << "玩法 : 在1~10中猜1个数字, 胜利获得10倍金额" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "下注金额: ";
	}
	else if (_level == 6.2)
	{
		std::cout << "在1~10中猜1个数字" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "猜一个整数: ";
	}
	else if (_level == 6.3)
	{
		if (isWin)
		{
			std::cout << "\033[0;32;40m恭喜, 你猜对了!\033[0m" << std::endl;
		}
		else
		{
			std::cout << "\033[0;31;40m你猜错了!\033[0m" << std::endl;
		}
	}
	else if (_level == 7.1)
	{
		std::cout << "当前游戏 : 终极考验" << std::endl;
		std::cout << "玩法 : 在1~20中猜1个数字, 胜利获得100倍金额" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "下注金额: ";
	}
	else if (_level == 7.2)
	{
		std::cout << "在1~20中猜1个数字" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "猜一个整数: ";
	}
	else if (_level == 7.3)
	{
		if (isWin)
		{
			std::cout << "\033[0;32;40m恭喜, 你猜对了!\033[0m" << std::endl;
		}
		else
		{
			std::cout << "\033[0;31;40m你猜错了!\033[0m" << std::endl;
		}
	}
}

void SceneGame::HandleEvent()
{
	if (_level == -1) system("pause");
	else if (_level == 0) std::getline(std::cin, _input, '\n');

	else if (_level == 1.1) std::getline(std::cin, _input, '\n');
	else if (_level == 1.2) std::getline(std::cin, _input, '\n');
	else if (_level == 1.3) system("pause");

	else if (_level == 2.1) std::getline(std::cin, _input, '\n');
	else if (_level == 2.2) std::getline(std::cin, _input, '\n');
	else if (_level == 2.3) system("pause");

	else if (_level == 3.1) std::getline(std::cin, _input, '\n');
	else if (_level == 3.2) std::getline(std::cin, _input, '\n');
	else if (_level == 3.3) system("pause");

	else if (_level == 4.1) std::getline(std::cin, _input, '\n');
	else if (_level == 4.2) std::getline(std::cin, _input, '\n');
	else if (_level == 4.3) system("pause");

	else if (_level == 5.1) std::getline(std::cin, _input, '\n');
	else if (_level == 5.2) std::getline(std::cin, _input, '\n');
	else if (_level == 5.3) system("pause");

	else if (_level == 6.1) std::getline(std::cin, _input, '\n');
	else if (_level == 6.2) std::getline(std::cin, _input, '\n');
	else if (_level == 6.3) system("pause");

	else if (_level == 7.1) std::getline(std::cin, _input, '\n');
	else if (_level == 7.2) std::getline(std::cin, _input, '\n');
	else if (_level == 7.3) system("pause");
}

void SceneGame::Update()
{
	if (_level == -1)
	{
		_level = 0;
	}
	else if (_level == 0)
	{
		if (_input == "1") _level = 1.1;
		else if (_input == "2") _level = 2.1;
		else if (_input == "3") _level = 3.1;
		else if (_input == "4") _level = 4.1;
		else if (_input == "5") _level = 5.1;
		else if (_input == "6") _level = 6.1;
		else if (_input == "7") _level = 7.1;
		else if (_input == "8") SceneManager::Instance()->Change(SCENE_MENU);
		else _level = -1;
	}

	else if (_level == 1.1)
	{
		_gameMoney = stoi(_input);
		_level = 1.2;
		if (_gameMoney > data::money) _level = -1;
	}
	else if (_level == 1.2)
	{
		int temp = tool::Randint(1, 2);
		if (_input == std::to_string(temp))
		{
			isWin = true;
			data::money += _gameMoney;
			data::happyValue += 5;
		}
		else
		{
			isWin = false;
			data::money -= _gameMoney;
			data::happyValue -= 10;
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		data::healthValue -= 10;
		if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		tool::Save();
		_level = 1.3;
	}
	else if (_level == 1.3)
	{
		_level = 0;
	}

	else if (_level == 2.1)
	{
		_gameMoney = stoi(_input);
		_level = 2.2;
		if (_gameMoney > data::money) _level = -1;
	}
	else if (_level == 2.2)
	{
		int temp = tool::Randint(1, 3);
		if (_input == std::to_string(temp))
		{
			isWin = true;
			data::money += _gameMoney * 2;
			data::happyValue += 5;
		}
		else
		{
			isWin = false;
			data::money -= _gameMoney;
			data::happyValue -= 10;
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		data::healthValue -= 10;
		if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		tool::Save();
		_level = 2.3;
	}
	else if (_level == 2.3)
	{
		_level = 0;
	}

	else if (_level == 3.1)
	{
		_gameMoney = stoi(_input);
		_level = 3.2;
		if (_gameMoney > data::money) _level = -1;
	}
	else if (_level == 3.2)
	{
		int temp = tool::Randint(1, 3);
		if (_input == std::to_string(temp))
		{
			isWin = true;
			data::money += _gameMoney * 2;
			data::happyValue += 5;
		}
		else
		{
			isWin = false;
			data::money -= _gameMoney;
			data::happyValue -= 10;
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		data::healthValue -= 10;
		if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		tool::Save();
		_level = 3.3;
	}
	else if (_level == 3.3)
	{
		_level = 0;
	}

	else if (_level == 4.1)
	{
		_gameMoney = stoi(_input);
		_level = 4.2;
		if (_gameMoney > data::money) _level = -1;
	}
	else if (_level == 4.2)
	{
		int temp = tool::Randint(1, 5);
		if (_input == std::to_string(temp))
		{
			isWin = true;
			data::money += _gameMoney * 3;
			data::happyValue += 5;
		}
		else
		{
			isWin = false;
			data::money -= _gameMoney;
			data::happyValue -= 10;
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		data::healthValue -= 10;
		if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		tool::Save();
		_level = 4.3;
	}
	else if (_level == 4.3)
	{
		_level = 0;
	}

	else if (_level == 5.1)
	{
		_gameMoney = stoi(_input);
		_level = 5.2;
		if (_gameMoney > data::money) _level = -1;
	}
	else if (_level == 5.2)
	{
		int temp = tool::Randint(1, 7);
		if (_input == std::to_string(temp))
		{
			isWin = true;
			data::money += _gameMoney * 6;
			data::happyValue += 5;
		}
		else
		{
			isWin = false;
			data::money -= _gameMoney;
			data::happyValue -= 10;
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		data::healthValue -= 10;
		if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		tool::Save();
		_level = 5.3;
	}
	else if (_level == 5.3)
	{
		_level = 0;
	}

	else if (_level == 6.1)
	{
		_gameMoney = stoi(_input);
		_level = 6.2;
		if (_gameMoney > data::money) _level = -1;
	}
	else if (_level == 6.2)
	{
		int temp = tool::Randint(1, 10);
		if (_input == std::to_string(temp))
		{
			isWin = true;
			data::money += _gameMoney * 10;
			data::happyValue += 5;
		}
		else
		{
			isWin = false;
			data::money -= _gameMoney;
			data::happyValue -= 10;
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		data::healthValue -= 10;
		if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		tool::Save();
		_level = 6.3;
	}
	else if (_level == 6.3)
	{
		_level = 0;
	}

	else if (_level == 7.1)
	{
		_gameMoney = stoi(_input);
		_level = 7.2;
		if (_gameMoney > data::money) _level = -1;
	}
	else if (_level == 7.2)
	{
		int temp = tool::Randint(1, 20);
		if (_input == std::to_string(temp))
		{
			isWin = true;
			data::money += _gameMoney * 100;
			data::happyValue += 5;
		}
		else
		{
			isWin = false;
			data::money -= _gameMoney;
			data::happyValue -= 10;
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		data::healthValue -= 10;
		if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		tool::Save();
		_level = 7.3;
		}
	else if (_level == 7.3)
	{
		_level = 0;
	}
	tool::CheckAchievement();
}

void SceneGame::Quit()
{

}