// Reproduce this:
// [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r4.png]
// Pay attention for the outlines as well

#include "draw.h"
#include <iostream>

void drawBoxes(int x, int y, int z, int w, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    int boxSize = 0;
    for (int i = 1; i < 7; i++) {
        drawBoxes((i * boxSize) / 2, (i * boxSize) / 2, (20 * i), (20 * i), gRenderer);
        boxSize = (20 * i);
    }
}

void drawBoxes(int x, int y, int z, int w, SDL_Renderer *gRenderer)
{

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 1);
    SDL_Rect drawRect = {(x - 1), (y - 1), z, w};
    SDL_RenderDrawRect(gRenderer, &drawRect);

    SDL_SetRenderDrawColor(gRenderer, 177, 69, 244, 1);
    SDL_Rect fillRect = {x, y, (z - 2), (w - 2)};
    SDL_RenderFillRect(gRenderer, &fillRect);
}