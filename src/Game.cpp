#include "Game/Game.hpp"

Game::Game(std::string title)
{
    assert(!GetWindowHandle()); // makes sure there isn't an existing window
    //initialise the window
    InitWindow(Settings::screenWidth, Settings::screenHeight, title.c_str());

    SetTargetFPS(Settings::targetFPS); // ¯\_(ツ)_/¯
}

Game::~Game(){
    assert(GetWindowHandle()); // makes sure there is an existing window
    CloseWindow();
}

bool Game::ShouldClose()
{
    assert(GetWindowHandle()); // makes sure there is an existing window
    return WindowShouldClose();
}

void Game::Update()
{

}

void Game::Draw() const {
    ClearBackground(RAYWHITE);
    DrawText("Hello Raylib!", Settings::screenWidth / 2 - MeasureText("Hello Raylib!", 50) / 2, Settings::screenHeight / 2 - 50, 50, LIGHTGRAY);
    DrawFPS(10, 10);
} 

void Game::Tick()
{
    BeginDrawing();
    Update();
    Draw();
    EndDrawing();
}