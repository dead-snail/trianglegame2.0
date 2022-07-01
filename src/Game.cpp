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
    Camera2D camera;
} 

void Game::Tick()
{
    BeginDrawing();
    Update();
    Draw();
    EndDrawing();
}