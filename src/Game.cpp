#include "Game/Game.hpp"
#include "Game/settings.hpp"
#include "raylib.h"
#include <assert.h>

//window initialisation
Game::Game(std::string title) {
    assert(!GetWindowHandle());
    InitWindow(Settings::screenWidth, Settings::screenHeight, title.c_str());
    SetTargetFPS(Settings::targetFPS);
}

//window destruction
Game::~Game(){
    assert(GetWindowHandle());
    CloseWindow();
}

void AddEntity(Entity* entity){
    assert(entity);
    
}

//checks if the window should close
bool Game::ShouldClose() {
    assert(GetWindowHandle());
    return WindowShouldClose(); 
}

//draws the game every frame
void Game::Draw() const {
    ClearBackground(RAYWHITE);
    DrawFPS(10, 10);
}

//updates the game every frame
void Game::Update() {
    
}

void Game::Tick() {
    BeginDrawing();
    Update();
    Draw();
    EndDrawing();
}