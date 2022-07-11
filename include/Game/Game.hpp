#pragma once

#include <string>
#include "Game/Settings.hpp"
#include "Game/Player.hpp"
#include "Game/BadPractice.hpp"
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
        Player player{"../assets/notafurry.jpg"};
};