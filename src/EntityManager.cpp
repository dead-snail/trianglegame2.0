#include "Game/EntityManager.hpp"

EntityManager::EntityManager()
{

}

EntityManager::~EntityManager()
{

}

void EntityManager::Update()
{

}

void EntityManager::Draw() const
{
    for(int i = 0; i < entities.size(); i++)
    {
        entities[i].Draw();
    }
}

void EntityManager::AddEntity(Entity entity)
{
    entities.push_back(entity);
}

void EntityManager::RemoveEntity(Entity entity)
{
    
}