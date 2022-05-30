#include "raylib.h"
#include "Game/allGameFiles.h"
#include <iostream>


int main(){
    Game game("fren");

    while (!game.ShouldClose()){
        game.Tick();
    }

    return 0;
}
