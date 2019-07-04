// Create a function that takes 1 parameter:
// An array of {x, y} points
// and connects them with green lines.
// Connect these to get a box: {{10, 10}, {290,  10}, {290, 290}, {10, 290}, {10, 10}}
// Connect these: {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}}

#include "draw.h"

void connectTheDots (int array[8][2], int sizeOfArray, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    int array[8][2] = {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);

    connectTheDots(array, sizeOfArray, gRenderer);
}

void connectTheDots (int array[8][2], int sizeOfArray, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 60, 184, 120, 1);

    for (int i = 0; i < sizeOfArray - 1; ++i) {
        SDL_RenderDrawLine(gRenderer, array[i][0], array[i][1], array[i + 1][0], array[i + 1][1]);
    }
}
