// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a 50 long horizontal line from that point.
// Draw at least 3 lines with that function using a loop.

#include "draw.h"

void drawALine (int x, int y, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    drawALine(20, 50, gRenderer);

    for (int i = 0; i < 600; i += 10) {
        drawALine(20, 20 + i, gRenderer);
    }

}

void drawALine (int x, int y, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, x, y, x + 50, y);
}