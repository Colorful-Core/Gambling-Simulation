#include "SceneManager.h"

void SceneMenu::Init()
{
	_level = 0;
	_input.clear();
}

void SceneMenu::Render()
{
	system("cls");
	if (_level == -1)
	{
		std::cout << "\033[0;31;40m错误 : 输入不存在的指令\033[0m" << std::endl;
	}
	else if (_level == 0)
	{
		std::cout << "--------------------" << std::endl;
		std::cout << "金钱 : " << data::money << std::endl;
		std::cout << "饥饿值 : " << data::healthValue << "/" << data::healthValueMax << std::endl;
		std::cout << "快乐值 : " << data::happyValue << "/" << data::happyValueMax << std::endl;
		std::cout << "--------------------" << std::endl;
		std::cout << "1 --> 进入赌场" << std::endl;
		std::cout << "2 --> 进入商店" << std::endl;
		std::cout << "3 --> 回家(成就与收藏)" << std::endl;
		std::cout << "4 --> 返回主页" << std::endl;
		std::cout << "--------------------" << std::endl;
		std::cout << "请输入: ";
	}
}

void SceneMenu::HandleEvent()
{
	if (_level == -1) system("pause");
	else if (_level == 0) std::getline(std::cin, _input, '\n');
}

void SceneMenu::Update()
{
	if (_level == -1)
	{
		_level = 0;
	}
	else if (_level == 0)
	{
		if (_input == "1") SceneManager::Instance()->Change(SCENE_GAME);
		else if (_input == "2") SceneManager::Instance()->Change(SCENE_SHOP);
		else if (_input == "3") SceneManager::Instance()->Change(SCENE_HOME);
		else if (_input == "4") SceneManager::Instance()->Change(SCENE_INIT);
		else _level = -1;
	}
	tool::Save();
}

void SceneMenu::Quit()
{

}