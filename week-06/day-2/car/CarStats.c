#include <stdio.h>
#include "CarStats.h"

void print_car_stats(car_t car)
{
    switch (car.type) {
        case TESLA:
            printf("KM of TESLA = %.02f\n", car.km);
            break;
        case VOLVO:
            printf("KM of VOLVO = %.02f\nGAS of VOLVO= %.02f\n", car.km, car.gas);
            break;
        case TOYOTA:
            printf("KM of TOYOTA= %.02f\nGAS of TOYOTA= %.02f\n", car.km, car.gas);
            break;
        case LAND_ROVER:
            printf("KM of LAND_ROVER = %.02f\nGAS of LAND_ROVER = %.02f\n", car.km, car.gas);
            break;
        default :
            printf("Invalid car type");
            break;
    }
}