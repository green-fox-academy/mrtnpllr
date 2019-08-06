#include "CarStats.h"

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main()
{
    car_t car_one;
    car_one.type = VOLVO;
    car_one.gas = 200;
    car_one.km = 1000;

    car_t car_two;
    car_two.type = TESLA;
    car_two.km = 1200;

    car_t car_three;
    car_three.type = TOYOTA;
    car_three.gas = 150;
    car_three.km = 1100;

    print_car_stats(car_one);
    print_car_stats(car_two);
    print_car_stats(car_three);

	return 0;
}