#pragma once

#include "car.h"
#include "player.h"
#include "Vec2.h"

class SceneTitle {

public:

	SceneTitle();
	virtual ~SceneTitle();

	void init();
	void end();

	bool update();

	void draw();

private:

	int m_fadeBright;

	int m_fadeSpeed;

};