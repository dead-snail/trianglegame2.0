#pragma once

#include <string>
#include "Game/Settings.hpp"
#include "raylib.h"
#include <assert.h>

class Game {
    public:
        Game(std::string title);
        Game(const Game&) = delete;
        Game& operator=(const Game&) = delete;
        ~Game();

        bool ShouldClose();

        void Update();
        void Draw() const;
        void Tick();
    private:

};