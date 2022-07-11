#pragma once

class Object {
    public:
        Object() = default;
        virtual void Update()= 0;
        virtual void Draw()= 0;
        ~Object(void) = default;
};