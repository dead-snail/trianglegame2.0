#include "v2f.hpp"

class Entity{
    public:
        Entity(v2f position);

        void Update();
        void Draw() const;
    
    protected:
        v2f position;
};