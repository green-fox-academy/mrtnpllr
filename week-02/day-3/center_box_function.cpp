// create a function that draws one square and takes 1 parameter:
// the square size
// and draws a square of that size to the center of the canvas.
// draw at least 3 squares with that function.
// the squares should not be filled otherwise they will hide each other
// avoid code duplication.

#include "draw.h"

void drawBoxes (int size, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    for (int i = 1; i < 4; ++i) {
        drawBoxes(50 * i, gRenderer);
    }
}

void drawBoxes (int size, SDL_Renderer *gRenderer)
{
    int center = 600 - size;

    SDL_SetRenderDrawColor(gRenderer, 0, 100, 10, 1);

    SDL_RenderDrawLine(gRenderer, size, size, size, center);
    SDL_RenderDrawLine(gRenderer, size, center, center, center);
    SDL_RenderDrawLine(gRenderer, center, center, center, size);
    SDL_RenderDrawLine(gRenderer, size, size, center, size);

}
