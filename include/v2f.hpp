#pragma once

class v2f{
    public:
        v2f() = default;
        constexpr v2f(float x, float y) : x(x), y(y) {}
        
        //equality
        constexpr bool operator==(const v2f& other) const {
            return x == other.x && y == other.y;
        }
        constexpr bool operator!=(const v2f& other) const {
            return !(*this == other);
        }
        //addition
        constexpr v2f operator+(const v2f& other) const {
            return v2f(x + other.x, y + other.y);
        }
        //addition with float
        constexpr v2f operator+(const float other) const {
            return v2f(x + other, y + other);
        }
        //addition assignment
        constexpr v2f operator+= (const v2f& other) {
            return *this = *this + other;
        }
        //subtraction
        constexpr v2f operator-(const v2f& other) const {
            return v2f(x - other.x, y - other.y);
        }
        //subtraction with float
        constexpr v2f operator-(const float other) const {
            return v2f(x - other, y - other);
        }
        //subtracion assignment
        constexpr v2f operator-= (const v2f& other) {
            return *this = *this - other;
        }
        //multiplication
        constexpr v2f operator*(const v2f& other) const {
            return v2f(x * other.x, y * other.y);
        }
        //multiplication with float
        constexpr v2f operator*(const float other) const {
            return v2f(x * other, y * other);
        }
        //multiplication assignment
        constexpr v2f operator*= (const v2f& other) {
            return *this = *this * other;
        }


    public:
        float x, y;
};