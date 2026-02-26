#include "tool_save.h"

#include "tool_file.h"

void tool::Load()
{
	std::vector<std::string> textList = tool::ReadFileEx(data::path, ';');

	data::healthValue = stoi(textList[0]);
	data::healthValueMax = stoi(textList[1]);
	data::happyValue = stoi(textList[2]);
	data::happyValueMax = stoi(textList[3]);
	data::money = stoi(textList[4]);

	data::furnitureList.push_back(stoi(textList[5]));
	data::furnitureList.push_back(stoi(textList[6]));
	data::furnitureList.push_back(stoi(textList[7]));
	data::furnitureList.push_back(stoi(textList[8]));
	data::furnitureList.push_back(stoi(textList[9]));
	data::furnitureList.push_back(stoi(textList[10]));

	data::achievementList.push_back(stoi(textList[11]));
	data::achievementList.push_back(stoi(textList[12]));
	data::achievementList.push_back(stoi(textList[13]));
	data::achievementList.push_back(stoi(textList[14]));
	data::achievementList.push_back(stoi(textList[15]));
	data::achievementList.push_back(stoi(textList[16]));
}

void tool::Save()
{
	std::vector<std::string> textList;
	textList.push_back(std::to_string(data::healthValue));
	textList.push_back(std::to_string(data::healthValueMax));
	textList.push_back(std::to_string(data::happyValue));
	textList.push_back(std::to_string(data::happyValueMax));
	textList.push_back(std::to_string(data::money));

	textList.push_back(std::to_string(data::furnitureList[0]));
	textList.push_back(std::to_string(data::furnitureList[1]));
	textList.push_back(std::to_string(data::furnitureList[2]));
	textList.push_back(std::to_string(data::furnitureList[3]));
	textList.push_back(std::to_string(data::furnitureList[4]));
	textList.push_back(std::to_string(data::furnitureList[5]));

	textList.push_back(std::to_string(data::achievementList[0]));
	textList.push_back(std::to_string(data::achievementList[1]));
	textList.push_back(std::to_string(data::achievementList[2]));
	textList.push_back(std::to_string(data::achievementList[3]));
	textList.push_back(std::to_string(data::achievementList[4]));
	textList.push_back(std::to_string(data::achievementList[5]));

	WriteFileEx(data::path, textList, ';');
}