#pragma once

#include "SceneInit.h"
#include "SceneMenu.h"
#include "SceneGame.h"
#include "SceneShop.h"
#include "SceneHome.h"
#include "SceneGameOver.h"

class SceneManager final
{
public:
	static SceneManager* Instance()
	{
		if (_instance == nullptr)
		{
			_instance = new SceneManager;
		}
		return _instance;
	}

	void Init(SceneID scene_id);
	void Render();
	void HandleEvent();
	void Update();
	void Change(SceneID scene_id);
	void Quit();

	SceneManager(const SceneManager&) = delete;
	SceneManager& operator=(const SceneManager&) = delete;
private:
	Scene* _scene = nullptr;

	SceneManager() = default;
	~SceneManager() = default;
	static SceneManager* _instance;
};