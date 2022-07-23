#include "Game/Player.hpp"
#include "Settings.hpp"
#include <iostream>

Player::Player(EntitySystem* es)
    :
    es(es),
    position((float)GetScreenWidth() / 2, (float)GetScreenHeight() / 2),
    speed(-325)
{
    this->es->entityList.push_back(this);

    texture = LoadTexture("../assets/ship.png");
    texture.height *= Settings::HEIGHT / 2;
    texture.width *= Settings::WIDTH / 2;
}

void Player::Update(){
    //Input
    if ((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP))) 
    {
        //Up
        position.y += speed * GetFrameTime();
    }
    else if ((IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) && position.y < GetScreenHeight())
    {
        //Down
        position.y -= speed * GetFrameTime();
    }


}

void Player::Render(){
    DrawTexture(texture, position.x,position.y, WHITE);
}

Player::~Player(){
    this->es->entityList.remove(this);
}