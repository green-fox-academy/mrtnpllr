#include "draw.h"
// Draw a box that has different colored lines on each edge.
// The center of the box should align with the center of the screen.

void draw(SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 150, 150, 150, 450);

    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);
    SDL_RenderDrawLine(gRenderer, 150, 450, 450, 450);

    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0xFF, 0xFF);
    SDL_RenderDrawLine(gRenderer, 450, 450, 450, 150);

    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0xFF, 0xFF);
    SDL_RenderDrawLine(gRenderer, 150, 150, 450, 150);
}