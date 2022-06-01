#pragma once

#include <string>

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

    
};