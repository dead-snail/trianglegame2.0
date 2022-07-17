#pragma once

#include "Entity.hpp"
#include <list>

class EntitySystem{
    public:
        EntitySystem();
        EntitySystem(const EntitySystem&) = delete;
        EntitySystem operator= (const EntitySystem&) = delete;
        ~EntitySystem();

        void UpdateEntities();

    private:
        std::list<Entity> EntityList;
};