#pragma once

#include "v2f.hpp"
#include "Game/Entity.hpp"
#include "Systems/EntitySystem.hpp"

class Player : public Entity{
    public:
        Player(EntitySystem* es);
        virtual void Update();
        virtual void Render();
        ~Player(void);

    private:
        //systems 
        EntitySystem* es;

        v2f position;
        float speed;
        Texture texture;
};