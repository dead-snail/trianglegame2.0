#include "v2f.hpp"
#include "raylib.h"
#include <string>

class Entity{
    public:
        Entity(v2f position);
        
        void Update();
        void Draw() const;
    
    protected:
        v2f position;
        
};