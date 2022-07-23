#pragma once

#include "Game/Entity.hpp"
#include <list>

class EntitySystem{
    public:
        EntitySystem();
        EntitySystem(const EntitySystem&) = delete;
        EntitySystem operator= (const EntitySystem&) = delete;
        ~EntitySystem();

        void UpdateEntities();
        void RenderEntities();

    public:
        std::list<Entity*> entityList;
};