#include "Game/Entity.hpp"
#include <vector>

class EntityManager {
    public:
        EntityManager();
        EntityManager(const EntityManager&) = delete;
        EntityManager& operator=(const EntityManager&) = delete;
        ~EntityManager();

        void Update();
        void Draw() const;

        void AddEntity(Entity entity);
        void RemoveEntity(Entity entity);

    private: 
        std::vector<Entity> entities;
};