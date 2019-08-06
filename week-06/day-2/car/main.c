#include "CarStats.h"

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main()
{
    car_t car_one = {.type = VOLVO, .km = 1500, .gas = 150};

    car_t car_two = {.type = TESLA,.km = 1200};

    car_t car_three = {.type = TOYOTA, .km = 1150, .gas = 150};

    print_car_stats(car_one);
    print_car_stats(car_two);
    print_car_stats(car_three);

    return 0;
}