// create a function that draws one square and takes 2 parameters:
// the x and y coordinates of the square's top left corner
// and draws a 50x50 square from that point.
// draw at least 3 squares with that function.
// avoid code duplication.

#include "draw.h"

void squareColor (int r, int g, int b, float a, SDL_Renderer * gRenderer);
void drawSquare (int x, int y, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    for (int i = 1; i < 5; ++i) {
        for (int j = 1; j < 10; ++j) {
            squareColor(10 + i, 25 * i, 50 * i, 1, gRenderer);
        }
        drawSquare(100 * i, 100 * i, gRenderer);
    }
}

void squareColor (int r, int g, int b, float a, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, r, g, b, a);
}

void drawSquare (int x, int y, SDL_Renderer *gRenderer)
{
    int a = 50;
    int b = 50;

    SDL_Rect fillRect = {x, y, a, b};
    SDL_RenderFillRect(gRenderer, &fillRect );
}