#pragma once

#include "SceneManager.h"

class App
{
public:
	void Init();
	void Run();
	void Quit();
private:
	void Render();
	void HandleEvent();
	void Update();
};