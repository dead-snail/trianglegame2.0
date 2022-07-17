#pragma once 
#include "raylib.h"

class Entity {
    public:
        Entity() = default;
        virtual void Update() = 0;
        virtual void Render() = 0;
        ~Entity(void) = default;

    private:
        Texture2D texture;
};