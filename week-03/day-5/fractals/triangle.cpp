#include "draw.h"
#include <SDL2_gfxPrimitives.h>
#include <math.h>

void draw(SDL_Renderer *gRenderer)
{
    int widthHeight = 500;
    int sideOfTriangle = 60;
    int heightOfTriangle = 60; //Apparently using the math formula makes deformed triangles... (sideOfTriangle * sqrt(3) / 2 -> avoid using this)

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 1);

    for (int i = 0; i < widthHeight / heightOfTriangle; ++i) {
        SDL_RenderDrawLine(gRenderer, (widthHeight / 2) + sideOfTriangle/ 2 * i, heightOfTriangle * i, sideOfTriangle * i, widthHeight);
        SDL_RenderDrawLine(gRenderer, (widthHeight / 2) - sideOfTriangle/ 2 * i, heightOfTriangle * i, widthHeight - (sideOfTriangle * i) , widthHeight);
        SDL_RenderDrawLine(gRenderer, (widthHeight / 2) - sideOfTriangle/ 2 * i, heightOfTriangle * i, (widthHeight / 2) + sideOfTriangle / 2 * i, heightOfTriangle * i);
    }
}