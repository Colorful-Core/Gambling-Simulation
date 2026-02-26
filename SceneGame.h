#pragma once

#include "Scene.h"

class SceneGame :public Scene
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
	int _gameMoney;
	bool isWin;
};