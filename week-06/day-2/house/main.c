#include <stdio.h>
#include "House.h"

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

int main()
{
    house_t firstHome = {.area = 500, .price = 250000};
    house_t secondHome = {.area = 100, .price = 30000};
    house_t thirdHome = {.area = 150, .price = 40000};
    house_t fourthHome = {.area = 80, .price = 250000};
    house_t fifthHome = {.area = 80, .price = 20000};

    house_t list_of_houses[5] = {firstHome, secondHome, thirdHome, fourthHome, fifthHome};
    int size_of_list = sizeof(list_of_houses) / sizeof(list_of_houses[0]);

    /*house_t list = { {"asd", 500, 250000},
                     {100, 300000},
                     {150, 400000},
                     { 80, 250000},
                     { 80, 200000} };
*/
    int potential_homes = count_potential_homes(list_of_houses, size_of_list);

    printf("Number of potential homes: %d\n", potential_homes);

  return 0;
}