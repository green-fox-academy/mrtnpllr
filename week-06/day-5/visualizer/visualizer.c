#include "visualizer.h"

vector_t construct_vector(generate_t generate)
{
    vector_t my_vector;
    init_vector(&my_vector);

    if (generate == NORMAL) {
        push_back(&my_vector, -1);
        push_back(&my_vector, -1);
        push_back(&my_vector, -2);
        push_back(&my_vector, 50);
        push_back(&my_vector, 100);
        push_back(&my_vector, 150);
        push_back(&my_vector, 200);
        push_back(&my_vector, 250);
        push_back(&my_vector, 300);
        push_back(&my_vector, 400);
        push_back(&my_vector, 450);
        push_back(&my_vector, 500);
        push_back(&my_vector, 550);
        push_back(&my_vector, 600);

    } else if (generate == RANDOM) {
        for (int i = 0; i < 10; ++i) {
            push_back(&my_vector, rand() % 500);
        }
    }

    return my_vector;
}

int set_color(int value, color_t color)
{
    int color_code[3] = {0, 0, 0};

    if (value < 0) {
        color_code[0] = 0;
        color_code[1] = 0;
        color_code[2] = 150;
    } else if (value == 0) {
        color_code[0] = 255;
        color_code[1] = 255;
        color_code[2] = 255;
    } else if (value > 0 && value < 255) {
        color_code[0] = 0;
        color_code[1] = 255 - value;
        color_code[2] = 0;
    } else if (value > 255 && value < 500) {
        color_code[0] = 500 - value;
        color_code[1] = 0;
        color_code[2] = 0;
    } else if (value > 500) {
        color_code[0] = 120;
        color_code[1] = 15;
        color_code[2] = 120;
    }

    switch (color) {
        case RED:
            return color_code[0];
        case GREEN:
            return color_code[1];
        case BLUE:
            return color_code[2];
        default:
            break;
    }
}

void draw_vector(SDL_Renderer *gRenderer, data_type_t data_type, vector_t *my_vector)
{
    int rect_size = 50;
    int x_coordinate = 50;
    int y_coordinate = 0;
    int R;
    int G;
    int B;
    int A = 1;

    if (data_type == CAPACITY) {
        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, A);
        for (int i = 0; i < my_vector->capacity; ++i) {
            SDL_Rect drawRect = {x_coordinate * i, y_coordinate, rect_size, rect_size};
            SDL_RenderDrawRect(gRenderer, &drawRect);
        }
    } else if (data_type == SIZE) {
        for (int i = 0; i < my_vector->size; ++i) {
            R = set_color(my_vector->element[i], RED);
            G = set_color(my_vector->element[i], GREEN);
            B = set_color(my_vector->element[i], BLUE);
            SDL_SetRenderDrawColor(gRenderer, R, G, B, A);
            SDL_Rect fillRect = {x_coordinate * i, y_coordinate, (rect_size - 1), (rect_size - 1)};
            SDL_RenderFillRect(gRenderer, &fillRect);

        }
    }
}