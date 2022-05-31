#include "Game/Game.hpp"
#include "Game/settings.hpp"
#include "raylib.h"
#include <assert.h>

Game::Game(std::string title) {
    assert(!GetWindowHandle());
    InitWindow(Settings::screenWidth, Settings::screenHeight, title.c_str());
    SetTargetFPS(Settings::targetFPS);
}

Game::~Game(){
    assert(GetWindowHandle());
    CloseWindow();
}

bool Game::ShouldClose() {
    assert(GetWindowHandle());
    return WindowShouldClose();
}

void Game::Draw() const {
    ClearBackground(RAYWHITE);
    DrawFPS(10, 10);
}

void Game::Update() {
    
}

void Game::Tick() {
    BeginDrawing();
    Update();
    Draw();
    EndDrawing();
}