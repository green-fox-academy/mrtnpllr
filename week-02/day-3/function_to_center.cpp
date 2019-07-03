// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Fill the canvas with lines from the edges, every 20 px, to the center.

#include "draw.h"

void drawALine (int x1, int x2, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    int x1 = 100;
    int x2 = 100;

    for (int i = 0; i <= 600 - (2 * x1); i += 20) {
        drawALine(x1 + i, x2, gRenderer);
    }
    for (int i = 0; i <= 600 - (2 * x1); i += 20) {
        drawALine(x1 + i, x2 + 600 - (2 * x1), gRenderer);
    }
    for (int j = 0; j <= 600 - (2 * x2); j += 20) {
        drawALine(x1, x2 + j, gRenderer);
    }
    for (int j = 0; j <= 600 - (2 * x2); j += 20) {
        drawALine(x1 + 600 - (2 * x2), x2 + j, gRenderer);
    }
}

void drawALine (int x1, int x2, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 1);
    SDL_RenderDrawLine(gRenderer, x1, x2, 300, 300);
}