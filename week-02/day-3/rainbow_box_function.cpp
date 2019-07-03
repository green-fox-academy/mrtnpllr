// Create a square drawing function that takes 2 parameters:
// The square size, and the fill color,
// and draws a square of that size and color to the center of the canvas.
// Create a loop that fills the canvas with a rainbow of colored squares.

#include "draw.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

void drawSquare(int size, int color[], SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    srand(time(0));

    for (int i = 600; i > 0; i -= 10) {
        int color[4] = {rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1};
        drawSquare(i, color, gRenderer);
    }

}

void drawSquare(int size, int color[], SDL_Renderer *gRenderer)
{
    int pos = (600 - size) / 2;

    SDL_SetRenderDrawColor(gRenderer, (color[0]), (color[1]), (color[2]), color[3]);
    SDL_Rect fillRect = {pos, pos, size, size};
    SDL_RenderFillRect(gRenderer, &fillRect);
}