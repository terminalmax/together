#include "raylib.h"

#include "actor.hpp"

int main() {
    
    InitWindow(400, 400, "Together");
    SetTargetFPS(60);

    Actor player{default_position, {10, 10}};
    


    while(!WindowShouldClose()) {
        
        //Input

        //AI
        
        //Update
        
        BeginDrawing();
        ClearBackground(BLACK);

        //Render Map

        //Render Actors

        EndDrawing();
    }

    CloseWindow();

    return 0;
}