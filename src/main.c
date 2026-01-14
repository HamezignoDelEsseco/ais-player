#include "raylib.h"
#include <stdio.h>

int main(){
    InitWindow(800, 500, "ais_player");
    
    Camera2D camera = {0};
    camera.target = (Vector2){0.0f, 0.0f};
    camera.offset = (Vector2){400.0f, 400.0f};
    camera.zoom = 1.0f;
    
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        float wheel = GetMouseWheelMove();
        if(wheel != 0){
            camera.zoom += wheel * 0.1f;
            if (camera.zoom < 0.1f) camera.zoom == 0.1f;
        }

        if(IsMouseButtonDown(MOUSE_BUTTON_RIGHT)){
            Vector2 delta = GetMouseDelta();
            camera.target.x -= delta.x / camera.zoom;
            camera.target.y -= delta.y / camera.zoom;
        }

        // Vector2 mouse = GetMousePosition();
        BeginDrawing();
        ClearBackground(RAYWHITE);

        BeginMode2D(camera);

        DrawCircle(0, 0, 5, RED);
        DrawCircle(100, 50, 8, BLUE);
        DrawCircle(-120, -80, 8, GREEN);

        EndMode2D();

        DrawText(TextFormat("Zoom: mouse wheel is %.00f", camera.zoom), 10, 20, 10, DARKGRAY);

        // DrawText("hello", 200, 280, 30, DARKPURPLE);
        // DrawText(TextFormat("Mouse position: %.0f, %.0f", mouse.x, mouse.y), 10, 10, 5, PURPLE);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}