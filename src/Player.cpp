#include "Game/Player.hpp"
#include <iostream>

Player::Player(EntitySystem* es)
    :
    es(es)
{
    this->es->entityList.push_back(this);

    texture = LoadTexture("../assets/ship.png");
}

void Player::Update(){

}

void Player::Render(){
    std::cout << "test \n";
    DrawRectangle(50,50, 50,50, RED);
}

Player::~Player(){
    this->es->entityList.remove(this);
}