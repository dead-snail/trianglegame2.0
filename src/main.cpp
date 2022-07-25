#include "raylib.h"
#include "Game/Settings.hpp"
#include "Game/Player.hpp"
#include "Systems/EntitySystem.hpp"

#include <iostream>

using namespace Settings;

int main(){
    //initialise opengl context and other shite
    InitWindow(WIDTH, HEIGHT, "Trangles");

    EntitySystem entitySys;

    //scene stuff
    Player player{&entitySys};

    //main game loop - if this needs explaining, something is clearly wrong
    while(!WindowShouldClose()){
        //updates all the entities
        entitySys.UpdateEntities();
        
        BeginDrawing();

        ClearBackground(Color{16, 0, 50, 255});

        // centre lines
        DrawLine(Settings::WIDTH / 2, 0, Settings::WIDTH / 2, Settings::HEIGHT, WHITE);
        DrawLine(0, Settings::HEIGHT / 2, Settings::WIDTH, Settings::HEIGHT / 2, WHITE);

        //draws all the entities
        entitySys.RenderEntities();

        DrawFPS(10,10);

        EndDrawing();
    }

    //probably closes the opengl context idfk
    CloseWindow();

    return 0;
}

