// Draw a green 100x100 square to the canvas' center.

#include "draw.h"

void draw(SDL_Renderer *gRenderer)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    //create a rectangle
    SDL_Rect fillRect = {250, 250, 100, 100};
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect );
}