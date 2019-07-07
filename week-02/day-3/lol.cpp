#include "draw.h"

void drawRect (int x, int y, int a, int b, SDL_Renderer * gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    drawRect(10, 50, 50, 200, gRenderer);
    drawRect(10, 250, 200, 50, gRenderer);
    drawRect(450, 50, 50, 200, gRenderer);
    drawRect(450, 250, 200, 50, gRenderer);

}

void drawRect (int x, int y, int a, int b, SDL_Renderer * gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 100, 0, 100, 1);
    SDL_Rect fillRect = {x, y, a, b};
    SDL_RenderFillRect(gRenderer, &fillRect );
}

