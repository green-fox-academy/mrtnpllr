// Exercise:
// draw four different size and color rectangles.
// avoid code duplication.

#include "draw.h"

void drawRect ( int as,
                int bs,
                int x,
                int y,
                int r,
                int g,
                int b,
                float a,
                SDL_Renderer *gRenderer);


void draw(SDL_Renderer *gRenderer)
{
    for (int i = 1; i < 5; i++) {
        drawRect(10 + i, 10 + i, 10 * i, 10 * i, 100 * i, 0 * i, 100 * i, 0.1 * i, gRenderer);
    }
}

void drawRect ( int as,
                int bs,
                int x,
                int y,
                int r,
                int g,
                int b,
                float a,
                SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, r, g, b, a);
    SDL_Rect fillRect = {x, y, as, bs};
    SDL_RenderFillRect(gRenderer, &fillRect );
}