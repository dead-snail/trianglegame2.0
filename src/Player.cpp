#include "Game/Player.hpp"
#include "Game/Settings.hpp"
#include <iostream>
#include "math.h"

Player::Player(EntitySystem* es)
    :
    es(es),
    position((float)GetScreenWidth() / 2, (float)GetScreenHeight() / 2),
    speed(-325)
{
    this->es->entityList.push_back(this);

    texture = LoadTexture("../assets/ship.png");
    texture.width *= 2;
    texture.height *= 2;
}

void Player::Update(){
    //Input
    if ((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) && position.y > 0) {
        //Up
        position.y += speed * GetFrameTime();
    }
    if ((IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) && position.y < Settings::HEIGHT - texture.height){
        //Down
        position.y -= speed * GetFrameTime();
    }
    if((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) && position.x > 0){
        //Left
        position.x += speed * GetFrameTime();
    }
    if((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && position.x < Settings::WIDTH - texture.width){
        //Right
        position.x -= speed * GetFrameTime();
    }   

}

void Player::Render(){
    DrawTexture(texture, position.x,position.y, WHITE);
}

Player::~Player(){
    this->es->entityList.remove(this);
}