#pragma once

#include "raylib.h"
#include <string>

class Game {
    public:
        Game(std::string title);
        //delete copy constructor
        Game(const Game&) = delete;
        //delete copy assignment
        Game& operator=(const Game&) = delete;
        ~Game();
        
        bool ShouldClose();

        void Draw() const;
        void Update();
        void Tick();
};