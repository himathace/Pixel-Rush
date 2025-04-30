#include <raylib.h>

int main(void){
    InitWindow(612,367,"Pixel game");
    
    SetTargetFPS(60);

    Rectangle rec={100,200,20,20}; // x , y , width , height
    int speed=10; // player speed

    Texture2D background=LoadTexture("background.jpg");


    while(!WindowShouldClose()){

        
        if(IsKeyDown(KEY_RIGHT) && rec.x+rec.width<GetScreenWidth()){ // move right
            rec.x+=speed;
        }
        if(IsKeyDown(KEY_LEFT) && rec.x>0){ // move left
            rec.x-=speed;
        }

        // if(IsKeyDown(KEY_UP) && rec.y>0){
        //     rec.y-=speed;
        // }
        // if(IsKeyDown(KEY_DOWN) && rec.y+rec.height<GetScreenHeight()){  
        //     rec.y+=speed;
        // }

        BeginDrawing();

        ClearBackground(BLACK);
        DrawRectangleRec(rec,RED);
        DrawTexture(background,0,0,WHITE);

        EndDrawing();        
    }

    UnloadTexture(background);
    CloseWindow();
    return 0;
}


