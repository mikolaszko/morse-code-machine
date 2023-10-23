#include <iostream>
#include <raylib-cpp.hpp>
#include <iomanip>
#include "interface.hpp"
#include "gui.hpp"

int main()
{
    Interface interface;
    PlayButton playButton;
    // Initialization
    int screenWidth = 800;
    int screenHeight = 450;

    raylib::Color textColor(LIGHTGRAY);
    raylib::Window w(screenWidth, screenHeight, "Morse Code Machine");

    SetTargetFPS(60);
    Vector2 playButtonPosition1 = {24, 22};
    Vector2 playButtonPosition2 = {24, 38};
    Vector2 playButtonPosition3 = {36, 31};
    std::cout << std::boolalpha;

    // Main game loop
    while (!w.ShouldClose()) // Detect window close button or ESC key
    {
        // Draw
        BeginDrawing();
        playButton.create((Vector2){24, 22},
                          (Vector2){24, 38},
                          (Vector2){36, 31}, VIOLET);
        if (CheckCollisionPointTriangle(GetMousePosition(), playButtonPosition1, playButtonPosition2, playButtonPosition3))
        {
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
            {
                interface.toggleRecording();
            }
        }
        std::cout << interface.isRecording;

        ClearBackground(RAYWHITE);
        textColor.DrawText("Start inputting your sentences to produce a morse code file", 90, 50, 20);
        EndDrawing();
    }

    return 0;
}