#include <stdio.h>
#include "Sandwich.h"
/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/


int main()
{
    sandwich_t tuna;
    tuna.price = 10;
    sandwich_t pepperoni;
    pepperoni.price = 8;
    sandwich_t cheese;
    cheese.price = 7;

    printf("Price of tuna order: %d\n", get_price(tuna, 10));
    printf("Price of pepperoni order: %d\n", get_price(pepperoni, 15));
    printf("Price of cheese order: %d\n", get_price(cheese, 10));


    return 0;
}