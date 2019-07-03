// Fill the canvas with a checkerboard pattern.

#include "draw.h"

void drawCheckerboard(int x, int y, int a, int b, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    for (int k = 0; k < 1000; k += 60) {
        for (int i = 0; i < 1000; i += 120) {
            drawCheckerboard(i, 0 + k * 2, 60, 60, gRenderer);
        }
        for (int j = 0; j < 1000; j += 120) {
            drawCheckerboard((j + 60), 60 + k * 2, 60, 60, gRenderer);
        }
    }
}

void drawCheckerboard(int x, int y, int a, int b, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 1);
    SDL_Rect fillRect = {x, y, a, b};
    SDL_RenderFillRect(gRenderer, &fillRect);
}