// Reproduce this:
// [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r3.png]
// Pay attention for the outlines as well

#include "draw.h"
#include <iostream>

void drawBoxes(int x, int y, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    for (int i = 1; i < 20; ++i) {
        drawBoxes(20 * i, 20 * i, gRenderer);
    }
}

void drawBoxes(int x, int y, SDL_Renderer *gRenderer)
{

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 1);
    SDL_Rect drawRect = {x, y, 20, 20};
    SDL_RenderDrawRect(gRenderer, &drawRect);
    
    SDL_SetRenderDrawColor(gRenderer, 177, 69, 244, 1);
    SDL_Rect fillRect = {x, y, 19, 19};
    SDL_RenderFillRect(gRenderer, &fillRect);
}