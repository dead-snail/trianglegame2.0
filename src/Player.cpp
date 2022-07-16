#include "Game/Player.hpp"
#include <string>
#include "Game/Settings.hpp"

//constructor
Player::Player()
    :
    position({Settings::screenWidth/2, Settings::screenHeight/2}),
    speed(-325),
    texture(LoadTexture("../assets/scarfy.png"))
{
    objectList.push_back(this); // adds this to the list of entities to render
}

void Player::Update(){
    if(IsKeyDown(KEY_W)){
        position.y += speed * GetFrameTime();
    }
}

void Player::Draw(){
    DrawTexture(texture, 50, 50, BLACK);
    DrawRectangle(position.x, position.y, 50, 50, RED);
}

Player::~Player(){
    UnloadTexture(texture);
}