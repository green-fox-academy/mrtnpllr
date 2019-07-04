#include "draw.h"

void draw(SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 60, 184, 120, 1);
    int widthHeight = 600;
    int lineNum = 12;

    for (int i = 0; i <= lineNum; i++) {
        SDL_RenderDrawLine(gRenderer, 20 + (i * widthHeight / lineNum), 0, widthHeight, 20 + (i * widthHeight / lineNum));
    }

    SDL_SetRenderDrawColor(gRenderer, 150, 50, 150, 1);
    for (int j = 0; j <= lineNum; j++) {
        SDL_RenderDrawLine(gRenderer, 0, 20 + (j * widthHeight / lineNum), 20 + (j * widthHeight / lineNum), widthHeight);
    }
}