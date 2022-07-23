#pragma once

#include "v2f.hpp"
#include "Game/Entity.hpp"
#include "Systems/EntitySystem.hpp"

class Player : public Entity{
    public:
        Player(EntitySystem es);
        void Update();
        void Render();
        ~Player(void);

    private:
        v2f position;
        float speed;
        Texture texture;
};