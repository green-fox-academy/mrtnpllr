#ifndef CAR_CARSTATS_H
#define CAR_CARSTATS_H


typedef enum car_type
{
    VOLVO,
    TOYOTA,
    LAND_ROVER,
    TESLA
} car_type_t;

typedef struct car
{
    car_type_t type;
    double km;
    double gas;
} car_t;

void print_car_stats(car_t car);


#endif //CAR_CARSTATS_H
