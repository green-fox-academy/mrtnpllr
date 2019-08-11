#ifndef DAY_5_VISUALIZER_H
#define DAY_5_VISUALIZER_H


#include <SDL_render.h>
#include "../my_vector/my_vector.h"

typedef enum color{
    RED,
    GREEN,
    BLUE
}color_t;

typedef enum generate_type{
    NORMAL,
    RANDOM
}generate_t;

typedef enum data_type{
    CAPACITY,
    SIZE
}data_type_t;

typedef struct drawing{
    SDL_Renderer* gRenderer;
}drawing_t;

vector_t construct_vector(generate_t generate);

int set_color(int value, color_t color);

void draw_vector(SDL_Renderer *gRenderer, data_type_t data_type, vector_t* my_vector);


#endif
