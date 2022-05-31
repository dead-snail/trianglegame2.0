#pragma once

class v2f{
    public:
        v2f() = default;
        constexpr v2f(float x, float y) : x(x), y(y) {}
        constexpr float GetX() const { return x; }
        constexpr float GetY() const { return y; }
        constexpr void SetX(float x) { this->x = x; }
        constexpr void SetY(float y) { this->y = y; }

        constexpr bool operator==(const v2f& other) const {
            return x == other.x && y == other.y;
        }
        constexpr bool operator!=(const v2f& other) const {
            return !(*this == other);
        }
        constexpr v2f operator+(const v2f& other) const {
            return v2f(x + other.x, y + other.y);
        }
        constexpr v2f operator+(const float other) const {
            return v2f(x + other, y + other);
        }
        constexpr v2f operator+= (const v2f& other) {
            return *this = *this + other;
        }
        constexpr v2f operator-(const v2f& other) const {
            return v2f(x - other.x, y - other.y);
        }
        constexpr v2f operator-(const float other) const {
            return v2f(x - other, y - other);
        }
        constexpr v2f operator-= (const v2f& other) {
            return *this = *this - other;
        }
        constexpr v2f operator*(const v2f& other) const {
            return v2f(x * other.x, y * other.y);
        }
        constexpr v2f operator*(const float other) const {
            return v2f(x * other, y * other);
        }
        constexpr v2f operator*= (const v2f& other) {
            return *this = *this * other;
        }


    private:
        float x, y;
};