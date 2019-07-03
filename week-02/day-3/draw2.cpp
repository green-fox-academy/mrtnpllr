#include "draw.h"

void draw(SDL_Renderer *gRenderer)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    //draw line
    SDL_RenderDrawLine(gRenderer, 300, 0, 300, 600);
}