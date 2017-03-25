#include "Player.h"


Player::Player(float x, float y): Entity(x, y) {
    this->sprite->addImage(game->loadImage("assets/p2_walk01.png"));
}

void Player::tick(float delta) {
    this->updatePhysics(delta);

    if (game->keyboardDown(SDL_SCANCODE_RIGHT)) {
        this->addForce(0.0f, 0.05f);
    }

    if (game->keyboardDown(SDL_SCANCODE_LEFT)) {
        this->addForce(180.0f, 0.05f);
    }

    if (game->keyboardDown(SDL_SCANCODE_UP)) {
        this->addForce(270.0f, 0.05f);
    }

    if (game->keyboardDown(SDL_SCANCODE_DOWN)) {
        this->addForce(90.0f, 0.05f);
    }
}

void Player::draw(float delta) {
    this->sprite->draw(delta);
}

void Player::scene(float delta, Instance * instance) {}
