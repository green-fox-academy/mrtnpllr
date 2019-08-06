#include <string.h>
#include <stdio.h>
#include "Car.h"

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */

int main()
{
    car_t car_one;
    car_one.year = 1987;
    car_one.transmission = AUTOMATIC;
    car_t car_two;
    car_two.year = 1999;
    car_two.transmission = AUTOMATIC;
    car_t car_three;
    car_three.year = 2001;
    car_three.transmission = SEMI_AUTOMATIC;
    car_t car_four;
    car_four.year = 1971;
    car_four.transmission = SEMI_AUTOMATIC;
    car_t car_five;
    car_five.year = 1995;
    car_five.transmission = CVT;
    car_t car_six;
    car_six.year = 2006;
    car_six.transmission = DUAL_ClUTCH;

    car_t cars[6] = {car_one, car_two, car_three, car_four, car_five, car_six};
    int size_of_cars = sizeof(cars) / sizeof(cars[0]);

    int older_cars = get_older_cars_than(cars, size_of_cars, 10);
    printf("Number of older cars: %d\n", older_cars);

    int number_of_semi_auto = get_transmission_count(cars, size_of_cars, SEMI_AUTOMATIC);
    printf("Number of cars with semi-automatic: %d\n", number_of_semi_auto);


    return 0;
}