#include <raylib.h>

int main(void){
    InitWindow(600,500,"Pixel game");
    
    SetTargetFPS(60);

    Rectangle rec={0,480,20,40}; // x , y , width , height
    int speed=10; // player speed
    bool isJumping = false; // flag to track jumping
    int jumpSpeed = -15; // initial jump speed
    int gravity = 1; // gravity effect
    int velocityY = 0; // vertical velocity

    while(!WindowShouldClose()){

        // Horizontal movement
        if(IsKeyDown(KEY_RIGHT) && rec.x+rec.width<GetScreenWidth()){ // move right
            rec.x+=speed;
        }
        if(IsKeyDown(KEY_LEFT) && rec.x>0){ // move left
            rec.x-=speed;
        }

        // Jump logic
        if(IsKeyPressed(KEY_SPACE) && !isJumping){ // start jump
            isJumping = true;
            velocityY = jumpSpeed;
        }

        if(isJumping){
            rec.y += velocityY; // apply vertical velocity
            velocityY += gravity; // apply gravity

            // Stop jumping when rectangle lands
            if(rec.y > 480){
                rec.y = 480; // reset to ground level
                isJumping = false;
                velocityY = 0;
            }
        }

        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangleRec(rec,WHITE);

        EndDrawing();        
    }

    CloseWindow();
    return 0;
}


