#include "raylib.h"
#include "Game/Settings.hpp"

using namespace Settings;

int main(){

    InitWindow(WIDTH, HEIGHT, "Trangles");

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

