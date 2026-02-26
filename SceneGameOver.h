#pragma once

#include "Scene.h"

class SceneGameOver :public Scene
{
public:
	void Init();
	void Render();
	void HandleEvent();
	void Update();
	void Quit();
};