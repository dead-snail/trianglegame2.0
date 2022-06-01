#include "raylib.h"
#include "Game/Game.hpp"

int main(){
    Game game("Trangle Game");

    while(!game.ShouldClose()){
        game.Tick();
    }

    return 0;
}