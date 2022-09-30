#pragma once

#include "car.h"
#include "player.h"
#include "Vec2.h"

class SceneMain {

public:

	SceneMain();
	virtual ~SceneMain();

	void init();
	void end();

	bool update();

	void draw();

private:

	Player m_player;
	Car m_car;


	int m_hPlayer;
	int m_hCar;

};