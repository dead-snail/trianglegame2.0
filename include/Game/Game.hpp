#pragma once

#include "raylib.h"
#include <string>
#include <vector>
#include "Game/Entity.hpp"

class Game {
    public:
        Game(std::string title);
        //delete copy constructor
        Game(const Game&) = delete;
        //delete copy assignment
        Game& operator=(const Game&) = delete;
        ~Game();
        
        bool ShouldClose();

        void AddEntity(Entity* entity);

        void Draw() const;
        void Update();
        void Tick();

    private:
        Entity objs[];
};