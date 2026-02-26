#include "SceneManager.h"

SceneManager* SceneManager::_instance = nullptr;

void SceneManager::Init(SceneID scene_id)
{
	switch (scene_id)
	{
	case SCENE_INIT:
		_scene = new SceneInit;
		break;
	case SCENE_MENU:
		_scene = new SceneMenu;
		break;
	case SCENE_GAME:
		_scene = new SceneGame;
		break;
	case SCENE_SHOP:
		_scene = new SceneShop;
		break;
	case SCENE_HOME:
		_scene = new SceneHome;
		break;
	case SCENE_GAMEOVER:
		_scene = new SceneGameOver;
		break;
	}

	_scene->Init();
}

void SceneManager::Render()
{
	_scene->Render();
}

void SceneManager::HandleEvent()
{
	_scene->HandleEvent();
}

void SceneManager::Update()
{
	_scene->Update();
}

void SceneManager::Change(SceneID scene_id)
{
	_scene->Quit();
	Init(scene_id);
}

void SceneManager::Quit()
{
	_scene->Quit();
	delete(_scene);
}