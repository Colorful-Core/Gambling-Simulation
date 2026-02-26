#pragma once

#include "Scene.h"

class SceneInit :public Scene
{
public:
	void Init();
	void Render();
	void HandleEvent();
	void Update();
	void Quit();
private:
	double _level;
	std::string _input;
	std::vector<std::string> fileList;
};