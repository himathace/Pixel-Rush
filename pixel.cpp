#include <raylib.h>

int main(void){
    InitWindow(700,600,"Pixel game");       // width,height
    
    SetTargetFPS(60);

    Rectangle rec={0,580,20,20}; // x , y , width , height
    int speed=10; // player speed

    bool isJumping = false; // flag to track jumping
    int jumpSpeed = -15; // initial jump speed
    int gravity = 1; // gravity effect
    int velocityY = 0; // vertical velocity

    // Camera2D camera = { 0 };
    // camera.target = (Vector2){   };      
    // camera.offset = (Vector2){ GetScreenWidth()/2, GetScreenHeight()/2 };  
    // camera.rotation = 0.0f;                      
    // camera.zoom = 1.0f;  

    while(!WindowShouldClose()){


        if(IsKeyDown(KEY_RIGHT) && rec.x<GetScreenWidth()){ 
            rec.x+=speed;
            // if(rec.x>GetScreenWidth()/2){
                
            // }
            // camera.target.x-=2;
        }
        if(IsKeyDown(KEY_LEFT) && rec.x>0){ 
            rec.x-=speed;
            // camera.target.x+=2;
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
            if(rec.y > 580){
                rec.y= 580; // reset to ground level
                isJumping = false;
                velocityY = 0;
            }
        }

        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangleRec(rec,WHITE);

        TraceLog(LOG_INFO, "rec.y: %f, velocityY: %d", rec.y, rec.height);

        EndDrawing();        
    }

    CloseWindow();
    return 0;
}


