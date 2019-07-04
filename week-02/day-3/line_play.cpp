#include "draw.h"

void drawLines(int x1, int y1, int x2, int y2, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 60, 184, 120, 1);
    int widthHeight = 600;

    for (int i = 0; i <= 12; i++) {
        SDL_RenderDrawLine(gRenderer, 20 + (i * widthHeight / 12), 0, widthHeight, 20 + (i * widthHeight / 12));
    }

    SDL_SetRenderDrawColor(gRenderer, 150, 50, 150, 1);
    for (int j = 0; j <= 12; j++) {
        SDL_RenderDrawLine(gRenderer, 0, 20 + (j * widthHeight / 12), 20 + (j * widthHeight / 12), widthHeight);
    }

}