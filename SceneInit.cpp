#include "SceneManager.h"

void SceneInit::Init()
{
	_level = 0;
	_input.clear();
	if (!tool::IsExist("save")) std::filesystem::create_directory("save");
}

void SceneInit::Render()
{
	system("cls");
	if (_level == -1)
	{
		std::cout << "\033[0;31;40m错误 : 输入不存在的指令\033[0m" << std::endl;
	}
	else if (_level == 0)
	{
		std::cout << "--------------------" << std::endl;
		std::cout << "1 --> 创建存档" << std::endl;
		std::cout << "2 --> 读取存档" << std::endl;
		std::cout << "3 --> 删除存档" << std::endl;
		std::cout << "4 --> 关闭游戏" << std::endl;
		std::cout << "--------------------" << std::endl;
		std::cout << "请输入: ";
	}
	else if (_level == 1.1)
	{
		std::cout << "请输入存档名: ";
	}
	else if (_level == 1.2)
	{
		std::cout << "\033[0;32;40m存档创建成功\033[0m" << std::endl;
	}
	else if (_level == 2.1)
	{
		fileList = tool::GetDirectoryFileName("save", ".save");
		if (!fileList.empty())
		{
			std::cout << "--------------------" << std::endl;
			for (size_t i = 0; i < fileList.size(); i++)
			{
				std::cout << i + 1 << " --> " << fileList[i] << std::endl;
			}
			std::cout << "--------------------" << std::endl;
			std::cout << "选择存档: ";
		}
		else
		{
			std::cout << "\033[0;31;40m错误 : 没有可用存档\033[0m" << std::endl;
			_level = 2.2;
		}
	}
	else if (_level == 2.2)
	{
		
	}
	else if (_level == 2.3)
	{
		std::cout << "\033[0;31;40m错误 : 输入不存在的指令\033[0m" << std::endl;
	}
	else if (_level == 3.1)
	{
		fileList = tool::GetDirectoryFileName("save", ".save");
		if (!fileList.empty())
		{
			std::cout << "--------------------" << std::endl;
			for (size_t i = 0; i < fileList.size(); i++)
			{
				std::cout << i + 1 << " --> " << fileList[i] << std::endl;
			}
			std::cout << "--------------------" << std::endl;
			std::cout << "选择存档: ";
		}
		else
		{
			std::cout << "\033[0;31;40m错误 : 没有可用存档\033[0m" << std::endl;
			_level = 2.2;
		}
	}
	else if (_level == 3.2)
	{

	}
	else if (_level == 3.3)
	{
		std::cout << "\033[0;31;40m错误 : 输入不存在的指令\033[0m" << std::endl;
	}
}

void SceneInit::HandleEvent()
{
	if (_level == -1) system("pause");
	else if (_level == 0) std::getline(std::cin, _input, '\n');
	else if (_level == 1.1) std::getline(std::cin, _input, '\n');
	else if (_level == 1.2) system("pause");
	else if (_level == 2.1) std::getline(std::cin, _input, '\n');
	else if (_level == 2.2) system("pause");
	else if (_level == 2.3) system("pause");
	else if (_level == 3.1) std::getline(std::cin, _input, '\n');
	else if (_level == 3.2) system("pause");
	else if (_level == 3.3) system("pause");
}

void SceneInit::Update()
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
		else if (_input == "4") data::isRunning = false;
		else _level = -1;
	}
	else if (_level == 1.1)
	{
		data::path = "save/" + _input + ".save";
		std::vector<std::string> textList = { "100", "100", "100", "100", "100", "0", "0" , "0" , "0" , "0" , "0", "0", "0", "0", "0", "0", "0" };
		tool::WriteFileEx(data::path, textList, ';');
		_level = 1.2;
	}
	else if (_level == 1.2)
	{
		_level = 0;
	}
	else if (_level == 2.1)
	{
		if (stoi(_input) > fileList.size() || stoi(_input) <= 0)
		{
			_level = 2.3;
		}
		else
		{
			data::path = "save/" + fileList[stoi(_input) - 1];
			tool::Load();
			std::cout << "\033[0;32;40m存档读取成功\033[0m" << std::endl;
			system("pause");
			SceneManager::Instance()->Change(SCENE_MENU);
		}
	}
	else if (_level == 2.2)
	{
		_level = 0;
	}
	else if (_level == 2.3)
	{
		_level = 0;
	}
	else if (_level == 3.1)
	{
		if (stoi(_input) > fileList.size() || stoi(_input) <= 0)
		{
			_level = 3.3;
		}
		else
		{
			std::string path = "save/" + fileList[stoi(_input) - 1];
			if (tool::DeleteFile(path))
			{
				std::cout << "\033[0;32;40m存档删除成功\033[0m" << std::endl;
			}
			else
			{
				std::cout << "\033[0;31;40m存档删除失败\033[0m" << std::endl;
			}
			system("pause");
			_level = 0;
		}
	}
	else if (_level == 3.2)
	{
		_level = 0;
	}
	else if (_level == 3.3)
	{
		_level = 0;
	}
}

void SceneInit::Quit()
{

}