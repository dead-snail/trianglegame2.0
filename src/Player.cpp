#include "Game/Player.hpp"
#include <string>
#include "Game/Settings.hpp"

//constructor
Player::Player()
    :
    position({Settings::screenWidth/2, Settings::screenHeight/2}),
    speed(-325)
{
    objectList.push_back(this); // adds this to the list of entities to render

    Image playerImage = LoadImage("../assets/ship.png");
    ImageRotateCW(&playerImage);
    texture = LoadTextureFromImage(playerImage);
    texture.height *= 100;
    texture.width *= 100;
}

void Player::Update(){
    if(IsKeyDown(KEY_W)){
        position.y += speed * GetFrameTime();
    }
}

void Player::Draw(){
    DrawTexture(texture, position.x - texture.width / 2, position.y - texture.height / 2, WHITE);
}

Player::~Player(){
    UnloadTexture(texture);
}