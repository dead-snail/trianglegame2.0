#include "raylib.h"
#include "Game/Settings.hpp"

using namespace Settings;

int main(){
    //initialise opengl context and other shite
    InitWindow(WIDTH, HEIGHT, "Trangles");

    //main game loop - if this needs explaining, something is clearly wrong
    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    //probably closes the opengl context idfk
    CloseWindow();

    return 0;
}

