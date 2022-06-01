#include "Game/Entity.hpp"
#include "Game/Game.hpp"
#include "raylib.h"
#include <iostream>

Entity::Entity(v2f position) : position(position), id(rand() * 5)
{
    std::cout << "id: " << id << std::endl; 
}

void Entity::Update()
{

}

void Entity::Draw() const
{
    DrawRectangle(position.GetX(), position.GetY(), 50, 50, RED);   
}