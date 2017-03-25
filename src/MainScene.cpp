#include "MainScene.h"
#include "Player.h"


MainScene::MainScene(): Scene() {}


void MainScene::init(float delta) {
    std::cout << "Mainscene started!" << std::endl;

    this->instantiate(new Player(120, 120));
}

void MainScene::tick(float delta) {
    this->tickDefault(delta);
}

void MainScene::draw(float delta) {
    this->drawDefault(delta);
}
