#include "Car.h"

int get_older_cars_than(car_t *car, int array_lenght, int age)
{
    int count_old_cars = 0;
    int current_date = 2019;

    for (int i = 0; i < array_lenght; ++i) {
        if (current_date - car[i].year > age) {
            count_old_cars++;
        }
    }

    return count_old_cars;
}

transmission_t get_transmission_count(car_t *car, int array_length, enum transmission trnsm)
{
    int count_cars_trnsm = 0;

    for (int i = 0; i < array_length; ++i) {
        if (car[i].transmission == trnsm) {
            count_cars_trnsm++;
        }
    }

    return count_cars_trnsm;
}


/* Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */