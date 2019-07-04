// Create a function that takes 1 parameter:
// An array of {x, y} points
// and connects them with green lines.
// Connect these to get a box: {{10, 10}, {290,  10}, {290, 290}, {10, 290}}
// Connect these: {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}}

#include "draw.h"

void connectTheDots (int array[4][2], int sizeOfArray, SDL_Renderer *gRenderer);

void draw(SDL_Renderer *gRenderer)
{
    int array[4][2] = {{10, 10}, {290,  10}, {290, 290}, {10, 290}};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);

    connectTheDots(array, sizeOfArray, gRenderer);
}

void connectTheDots (int array[4][2], int sizeOfArray, SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0xFF);

    for (int i = 0; i <= sizeOfArray; ++i) {
        for (int j = 0; j <= 1; ++j) {
            SDL_RenderDrawLine(gRenderer, array[i][j], array[i][j + 1], array[i + 1][j], array[i + 1][j + 1]);
        }
    }
}
