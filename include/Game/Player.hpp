#pragma once

#include "v2f.hpp"
#include "Game/Entity.hpp"
#include "Systems/EntitySystem.hpp"

//class for the player (only needed for the game scene) 
class Player : public Entity{
    public:
        Player(EntitySystem* es);
        virtual void Update();
        virtual void Render();
        ~Player(void);

    private:
        //systems 
        EntitySystem* es;

        //properties
        v2f position;
        float speed;
        Texture texture;
};