#include "app.h"

void App::Init()
{
	SceneManager::Instance()->Init(SCENE_INIT);
	data::isRunning = true;
}

void App::Run()
{
	while (data::isRunning)
	{
		Render();
		HandleEvent();
		Update();
	}
}

void App::Quit()
{
	SceneManager::Instance()->Quit();
}

void App::Render()
{
	SceneManager::Instance()->Render();
}

void App::HandleEvent()
{
	SceneManager::Instance()->HandleEvent();
}

void App::Update()
{
	SceneManager::Instance()->Update();
}