#include "Systems/EntitySystem.hpp"

EntitySystem::EntitySystem(){
    
}

void EntitySystem::UpdateEntities(){
    for(Entity* e : entityList){
        e->Update();
    }
}

void EntitySystem::RenderEntities(){
    for(Entity* e : entityList){
        e->Render();
    }
}

EntitySystem::~EntitySystem(){
    entityList.clear();
}