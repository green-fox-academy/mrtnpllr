#ifndef SANDWICH_SANDWICH_H
#define SANDWICH_SANDWICH_H


typedef struct sandwich
{
    char name[256];
    float price;
    float weight;
} sandwich_t;

float get_price(sandwich_t sandwich, int number_of_order);


#endif //SANDWICH_SANDWICH_H
