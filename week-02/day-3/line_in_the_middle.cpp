// draw a red horizontal line to the canvas' middle.
// draw a green vertical line to the canvas' middle.

#include "draw.h"

void draw(SDL_Renderer *gRenderer)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    //draw line
    SDL_RenderDrawLine(gRenderer, 300, 0, 300, 600);

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    //draw line
    SDL_RenderDrawLine(gRenderer, 0, 300, 600, 300);
}