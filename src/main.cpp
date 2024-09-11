#include "sl.h"

int main(int args, char* argv[])
{
    int screenWidth = 1280;
    int screenHeight = 720;
    
    int paddleHeight = 50;
    int paddleWidth = 150;

    // set up our window and a few resources we need
    slWindow(screenWidth, screenHeight, "Simple SIGIL Example", false);
    



    while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
    {
        // background glow
        slSetForeColor(1.0, 1.0, 1.0, 1.0);
        

        slRectangleFill(screenWidth / 2, screenHeight / 2, paddleWidth, paddleHeight);
        

        slRender();
    }
    slClose();
    return 0;
}