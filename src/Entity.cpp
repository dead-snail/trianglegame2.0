#include "Game/Entity.hpp"
#include "Game/Game.hpp"
#include "raylib.h"

Entity::Entity(v2f position) : position(position)
{
    
}

void Entity::Update()
{

}

void Entity::Draw() const
{
    DrawRectangle(position.GetX(), position.GetY(), 50, 50, RED);   
}