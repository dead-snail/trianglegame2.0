#pragma once 

#include "v2f.hpp"
#include "Game/BadPractice.hpp"

class Player : public Object {
    public: 

        Player();
        virtual void Update();
        virtual void Draw();
        ~Player(void);

    private: 
        v2f position;
        float speed;
        Texture2D texture;
};

