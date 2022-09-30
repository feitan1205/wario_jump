#include "DxLib.h"
#include "SceneMain.h"
#include "game.h"

SceneMain::SceneMain() {

	m_hPlayer = -1;
	m_hCar = -1;

}

SceneMain::~SceneMain() {



}

void SceneMain::init() {

	m_hPlayer = LoadGraph("data/player.png");
	m_hCar = LoadGraph("data/car.png");

	m_player.setGraphic(m_hPlayer);
	m_player.setup(Game::kFieldY);

	m_car.setGraphic(m_hCar);
	m_car.setup(Game::kFieldY);

}
void SceneMain::end() {

	DeleteGraph(m_hPlayer);
	DeleteGraph(m_hCar);

}

bool SceneMain::update() {

	m_hPlayer = LoadGraph("data/player.png");
	m_hCar = LoadGraph("data/car.png");

	m_player.update();
	m_car.update();

	if (m_player.isCol(m_car))
	{
		m_player.setDead(true);
	}

	return false;

}

void SceneMain::draw() {

	// ’n–Ê‚Ì•`‰æ
	DrawLine(0, Game::kFieldY, Game::kScreenWidth, Game::kFieldY, GetColor(255, 255, 255));
	m_player.draw();
	m_car.draw();


}
