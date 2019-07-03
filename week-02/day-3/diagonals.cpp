#include "draw.h"

// Draw the canvas' diagonals.
// If it starts from the upper-left corner it should be green, otherwise it should be red.

void draw(SDL_Renderer *gRenderer)
{
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    //draw line
    SDL_RenderDrawLine(gRenderer, 0, 0, 600, 600);
    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    //draw line
    SDL_RenderDrawLine(gRenderer, 600, 0, 0, 600);

}