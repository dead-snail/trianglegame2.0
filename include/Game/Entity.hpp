#pragma once 
#include "raylib.h"
#include "v2f.hpp"

class Entity {
    public:
        Entity() = default;
        virtual void Update() = 0;
        virtual void Render() = 0;
        ~Entity(void) = default;
};