#include "sl.h"

int main(int args, char* argv[])
{
    // set up our window and a few resources we need
    slWindow(1280, 720, "Simple SIGIL Example", false);
    

    while (!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
    {
        // background glow
        slSetForeColor(0.1, 0.9, 0.2, 0.4);
        
        

        slRender();
    }
    slClose();
    return 0;
}