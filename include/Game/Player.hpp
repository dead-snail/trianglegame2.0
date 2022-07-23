#include "Game/Entity.hpp"

class Player : public Entity{
    public:
        Player();
        void Update();
        void Render();
        ~Player();
}