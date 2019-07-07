#include "draw.h"

void draw(SDL_Renderer *gRenderer)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    //draw line
    for (int i = 0; i < 100; ++i) {
        SDL_RenderDrawLine(gRenderer, 100 * i, 0, 200, 200);
    }
}