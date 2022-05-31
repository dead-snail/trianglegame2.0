#include "Game/Game.hpp"
#include "Game/Entity.hpp"

class Player : public Entity{
    public:
        Player(v2f position, int speed, int health, int maxHealth);

        void move(v2f direction);

    private:
        int speed;
        int health;
        int maxHealth;
};