#include "v2f.hpp"

class Entity{
    public:
        Entity(v2f position);

        int id;

        virtual void Update();
        virtual void Draw() const;
    
    protected:
        v2f position;
};