#include "SceneManager.h"

void SceneShop::Init()
{
	_level = 0;
	_input.clear();
}

void SceneShop::Render()
{
	system("cls");
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << "金钱 : " << data::money << std::endl;
	std::cout << "饥饿值 : " << data::healthValue << "/" << data::healthValueMax << std::endl;
	std::cout << "快乐值 : " << data::happyValue << "/" << data::happyValueMax << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;
	if (_level == -1)
	{
		std::cout << "\033[0;31;40m错误 : 输入不存在的指令\033[0m" << std::endl;
	}
	else if (_level == 0)
	{
		std::cout << "1 ---> 米饭(+30饥饿 -50G)" << std::endl;
		std::cout << "2 ---> 烧烤(+80饥饿 -100G)" << std::endl;
		std::cout << "3 ---> 火锅(+200饥饿 -200G)" << std::endl;
		std::cout << "4 ---> 糖果(+30快乐 -50G)" << std::endl;
		std::cout << "5 ---> 饼干(+80快乐 -100G)" << std::endl;
		std::cout << "6 ---> 可乐(+200快乐 -200G)" << std::endl;
		if (data::furnitureList[0] == 0) std::cout << "7 ---> 金床铺(+50饥饿Max +50快乐Max -100000G)(未购买)" << std::endl;
		else std::cout << "7 ---> 金床铺(+50饥饿Max +50快乐Max -100000G)(已购买)" << std::endl;
		if (data::furnitureList[1] == 0) std::cout << "8 ---> 金沙发(+50饥饿Max +50快乐Max -80000G)(未购买)" << std::endl;
		else std::cout << "8 ---> 金沙发(+50饥饿Max +50快乐Max -80000G)(已购买)" << std::endl;
		if (data::furnitureList[2] == 0) std::cout << "9 ---> 金桌子(+50饥饿Max +50快乐Max -60000G)(未购买)" << std::endl;
		else std::cout << "9 ---> 金桌子(+50饥饿Max +50快乐Max -60000G)(已购买)" << std::endl;
		if (data::furnitureList[3] == 0) std::cout << "10 --> 金椅子(+50饥饿Max +50快乐Max -50000G)(未购买)" << std::endl;
		else std::cout << "10 --> 金椅子(+50饥饿Max +50快乐Max -50000G)(已购买)" << std::endl;
		if (data::furnitureList[4] == 0) std::cout << "11 --> 金马桶(+50饥饿Max +50快乐Max -50000G)(未购买)" << std::endl;
		else std::cout << "11 --> 金马桶(+50饥饿Max +50快乐Max -50000G)(已购买)" << std::endl;
		if (data::furnitureList[5] == 0) std::cout << "12 --> 金地板(+50饥饿Max +50快乐Max -150000G)(未购买)" << std::endl;
		else std::cout << "12 --> 金地板(+50饥饿Max +50快乐Max -150000G)(已购买)" << std::endl;
		std::cout << "13 --> 返回菜单" << std::endl;
		std::cout << "----------------------------------------------------------------------" << std::endl;
		std::cout << "请输入: ";
	}
}

void SceneShop::HandleEvent()
{
	if (_level == -1) system("pause");
	else if (_level == 0) std::getline(std::cin, _input, '\n');
}

void SceneShop::Update()
{
	if (_level == -1)
	{
		_level = 0;
	}
	else if (_level == 0)
	{
		if (_input == "1")
		{
			data::money -= 50;
			data::healthValue += 30;
			std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
			system("pause");
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		else if (_input == "2")
		{
			data::money -= 100;
			data::healthValue += 80;
			std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
			system("pause");
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		else if (_input == "3")
		{
			data::money -= 200;
			data::healthValue += 200;
			std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
			system("pause");
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			if (tool::CheckHealth()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		else if (_input == "4")
		{
			data::money -= 50;
			data::happyValue += 30;
			std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
			system("pause");
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		else if (_input == "5")
		{
			data::money -= 100;
			data::happyValue += 80;
			std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
			system("pause");
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		else if (_input == "6")
		{
			data::money -= 200;
			data::happyValue += 200;
			std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
			system("pause");
			if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			if (tool::CheckHappy()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
		}
		else if (_input == "7")
		{
			if (data::furnitureList[0] == 0)
			{
				data::money -= 100000;
				data::healthValueMax += 50;
				data::happyValueMax += 50;
				data::furnitureList[0] = 1;
				std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
				system("pause");
				if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			}
			else
			{
				std::cout << "\033[0;31;40m你已经买过这个了\033[0m" << std::endl;
				system("pause");
				_level = 0;
			}
		}
		else if (_input == "8")
		{
			if (data::furnitureList[1] == 0)
			{
				data::money -= 80000;
				data::healthValueMax += 50;
				data::happyValueMax += 50;
				data::furnitureList[1] = 1;
				std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
				system("pause");
				if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			}
			else
			{
				std::cout << "\033[0;31;40m你已经买过这个了\033[0m" << std::endl;
				system("pause");
				_level = 0;
			}
		}
		else if (_input == "9")
		{
			if (data::furnitureList[2] == 0)
			{
				data::money -= 60000;
				data::healthValueMax += 50;
				data::happyValueMax += 50;
				data::furnitureList[2] = 1;
				std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
				system("pause");
				if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			}
			else
			{
				std::cout << "\033[0;31;40m你已经买过这个了\033[0m" << std::endl;
				system("pause");
				_level = 0;
			}
		}
		else if (_input == "10")
		{
			if (data::furnitureList[3] == 0)
			{
				data::money -= 50000;
				data::healthValueMax += 50;
				data::happyValueMax += 50;
				data::furnitureList[3] = 1;
				std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
				system("pause");
				if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			}
			else
			{
				std::cout << "\033[0;31;40m你已经买过这个了\033[0m" << std::endl;
				system("pause");
				_level = 0;
			}
		}
		else if (_input == "11")
		{
			if (data::furnitureList[4] == 0)
			{
				data::money -= 50000;
				data::healthValueMax += 50;
				data::happyValueMax += 50;
				data::furnitureList[4] = 1;
				std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
				system("pause");
				if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			}
			else
			{
				std::cout << "\033[0;31;40m你已经买过这个了\033[0m" << std::endl;
				system("pause");
				_level = 0;
			}
		}
		else if (_input == "12")
		{
			if (data::furnitureList[5] == 0)
			{
				data::money -= 150000;
				data::healthValueMax += 50;
				data::happyValueMax += 50;
				data::furnitureList[5] = 1;
				std::cout << "\033[0;32;40m购买成功\033[0m" << std::endl;
				system("pause");
				if (tool::CheckMoney()) SceneManager::Instance()->Change(SCENE_GAMEOVER);
			}
			else
			{
				std::cout << "\033[0;31;40m你已经买过这个了\033[0m" << std::endl;
				system("pause");
				_level = 0;
			}
		}
		else if (_input == "13") SceneManager::Instance()->Change(SCENE_MENU);
		else _level = -1;
	}
	tool::CheckAchievement();
}

void SceneShop::Quit()
{
}