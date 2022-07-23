#include "Game/Player.hpp"
#include "Game/Settings.hpp"
#include <iostream>

Player::Player(EntitySystem* es)
    :
    es(es),
    position((float)GetScreenWidth() / 2, (float)GetScreenHeight() / 2),
    speed(-325)
{
    this->es->entityList.push_back(this);

    texture = LoadTexture("../assets/ship.png");
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
    DrawTexture(texture, )
}

Player::~Player(){
    this->es->entityList.remove(this);
}