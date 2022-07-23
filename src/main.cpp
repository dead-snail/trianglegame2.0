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

        ClearBackground(RAYWHITE);
        //draws all the entities
        entitySys.RenderEntities();

        DrawFPS(10,10);

        EndDrawing();
    }

    //probably closes the opengl context idfk
    CloseWindow();

    return 0;
}

