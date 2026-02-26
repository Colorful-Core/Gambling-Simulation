#pragma once

#include "data.h"
#include "tool.h"

class Scene
{
public:
	virtual void Init() {}
	virtual void Render() {}
	virtual void HandleEvent() {}
	virtual void Update() {}
	virtual void Quit() {}
};

typedef int SceneID;

enum SceneEnum
{
	SCENE_INIT,
	SCENE_MENU,
	SCENE_GAME,
	SCENE_SHOP,
	SCENE_HOME,
	SCENE_GAMEOVER
};