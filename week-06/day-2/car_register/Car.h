#ifndef CAR_REGISTER_CAR_H
#define CAR_REGISTER_CAR_H

typedef enum transmission {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_ClUTCH,
} transmission_t;


typedef struct car
{
    char manufacturer[256];
    float price;
    int year;
    transmission_t transmission;

} car_t;

int get_older_cars_than(car_t* car, int array_lenght, int age);

transmission_t get_transmission_count(car_t* car, int array_length, enum transmission trnsm);


#endif //CAR_REGISTER_CAR_H