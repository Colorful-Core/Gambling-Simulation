#pragma once

#include "Scene.h"

class SceneHome :public Scene
{
public:
	void Init();
	void Render();
	void HandleEvent();
	void Update();
	void Quit();
};