#include "draw.h"

// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Draw at least 3 lines with that function using a loop.
void drawLine(int x, int y, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    int x = 1;
    int y = 1;
    //drawLine(x,y, gRenderer);

    for (int i = 1; i < 600; i += 10) {
        drawLine(x + i,y, gRenderer);
    }

}

void drawLine(int x, int y, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, x, y, 300, 300);
}