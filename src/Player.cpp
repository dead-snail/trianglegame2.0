#include "Game/Player.hpp"

Player::Player(v2f position, int speed, int health, int maxHealth)
    : 
    Entity(position),
    speed(speed), 
    health(health), 
    maxHealth(maxHealth)
    {
        
}