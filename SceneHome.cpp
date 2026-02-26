#include "SceneManager.h"

void SceneHome::Init()
{

}

void SceneHome::Render()
{
	system("cls");
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << "金钱 : " << data::money << std::endl;
	std::cout << "饥饿值 : " << data::healthValue << "/" << data::healthValueMax << std::endl;
	std::cout << "快乐值 : " << data::happyValue << "/" << data::happyValueMax << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << "家具 : " << std::endl;
	if (data::furnitureList[0] == 0) std::cout << "金床铺(+50饥饿Max +50快乐Max)(未购买)" << std::endl;
	else std::cout << "\033[0;33;40m金床铺(+50饥饿Max +50快乐Max)(已购买)\033[0m" << std::endl;
	if (data::furnitureList[1] == 0) std::cout << "金沙发(+50饥饿Max +50快乐Max)(未购买)" << std::endl;
	else std::cout << "\033[0;33;40m金沙发(+50饥饿Max +50快乐Max)(已购买)\033[0m" << std::endl;
	if (data::furnitureList[2] == 0) std::cout << "金桌子(+50饥饿Max +50快乐Max)(未购买)" << std::endl;
	else std::cout << "\033[0;33;40m金桌子(+50饥饿Max +50快乐Max)(已购买)\033[0m" << std::endl;
	if (data::furnitureList[3] == 0) std::cout << "金椅子(+50饥饿Max +50快乐Max)(未购买)" << std::endl;
	else std::cout << "\033[0;33;40m金椅子(+50饥饿Max +50快乐Max)(已购买)\033[0m" << std::endl;
	if (data::furnitureList[4] == 0) std::cout << "金马桶(+50饥饿Max +50快乐Max)(未购买)" << std::endl;
	else std::cout << "\033[0;33;40m金马桶(+50饥饿Max +50快乐Max)(已购买)\033[0m" << std::endl;
	if (data::furnitureList[5] == 0) std::cout << "金地板(+50饥饿Max +50快乐Max)(未购买)" << std::endl;
	else std::cout << "\033[0;33;40m金地板(+50饥饿Max +50快乐Max)(已购买)\033[0m" << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << "成就 : " << std::endl;
	if (data::achievementList[0] == 0) std::cout << "绝境之时(金钱只剩1G)(未完成)" << std::endl;
	else std::cout << "\033[0;33;40m绝境之时(金钱只剩1G)(已完成)\033[0m" << std::endl;
	if (data::achievementList[1] == 0) std::cout << "初次成功(金钱大于1000G)(未完成)" << std::endl;
	else std::cout << "\033[0;33;40m初次成功(金钱大于1000G)(已完成)\033[0m" << std::endl;
	if (data::achievementList[2] == 0) std::cout << "小有成就(金钱大于10000G)(未完成)" << std::endl;
	else std::cout << "\033[0;33;40m小有成就(金钱大于10000G)(已完成)\033[0m" << std::endl;
	if (data::achievementList[3] == 0) std::cout << "大有成就(金钱大于5000000G)(未完成)" << std::endl;
	else std::cout << "\033[0;33;40m大有成就(金钱大于5000000G)(已完成)\033[0m" << std::endl;
	if (data::achievementList[4] == 0) std::cout << "财富自由(金钱大于10000000G)(未完成)" << std::endl;
	else std::cout << "\033[0;33;40m财富自由(金钱大于10000000G)(已完成)\033[0m" << std::endl;
	if (data::achievementList[5] == 0) std::cout << "登临首富(金钱大于100000000G)(未完成)" << std::endl;
	else std::cout << "\033[0;33;40m登临首富(金钱大于100000000G)(已完成)\033[0m" << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;
}

void SceneHome::HandleEvent()
{
	system("pause");
}

void SceneHome::Update()
{
	SceneManager::Instance()->Change(SCENE_MENU);
}

void SceneHome::Quit()
{

}