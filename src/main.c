#include "raylib.h"
#include <stdio.h>

int main(){
    InitWindow(500, 500, "Hello");
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("hello", 200, 280, 30, DARKPURPLE);

        EndDrawing();
    }
    printf("Hello world !");
}