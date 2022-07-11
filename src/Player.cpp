#include "Game/Player.hpp"
#include <string>

//constructor
Player::Player(std::string imagePath)
    :
    position({GetScreenWidth()/2, GetScreenHeight()/2})
{
    objectList.push_back(this); // adds this to the list of entities to render

    Image playerImage = LoadImage("../assets/notafurry.jpg");
    ImageRotateCW(&playerImage);
    texture = LoadTextureFromImage(playerImage);
    texture.height *= 10;
    texture.width *= 10;
}