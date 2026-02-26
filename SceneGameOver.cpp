#include "SceneManager.h"

void SceneGameOver::Init()
{
}

void SceneGameOver::Render()
{
	system("cls");
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "金钱 : " << data::money << std::endl;
	std::cout << "饥饿值 : " << data::healthValue << std::endl;
	std::cout << "快乐值 : " << data::happyValue << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "\033[0;31;40m你死了, 游戏结束\033[0m" << std::endl;
}

void SceneGameOver::HandleEvent()
{
	system("pause");
}

void SceneGameOver::Update()
{
	tool::DeleteFile(data::path);
	SceneManager::Instance()->Change(SCENE_INIT);
}

void SceneGameOver::Quit()
{
}