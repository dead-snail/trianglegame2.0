#include "raylib.h"
#include "Game/allGameFiles.hpp"
#include <iostream>


int main(){
    Game game("fren");

    while (!game.ShouldClose()){
        game.Tick();
    }

    return 0;
}
