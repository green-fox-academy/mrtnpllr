#ifndef CAR_CARSTATS_H
#define CAR_CARSTATS_H


#include <stdio.h>

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

typedef struct car {
    enum car_type type;
    double km;
    double gas;
} car_t;

void print_car_stats(car_t car);


#endif //CAR_CARSTATS_H
