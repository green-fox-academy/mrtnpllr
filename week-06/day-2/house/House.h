#ifndef HOUSE_HOUSE_H
#define HOUSE_HOUSE_H


typedef struct house
{
    char address[256];
    int price;
    int number_of_rooms;
    float area;

} house_t;

int is_worth_to_buy(house_t* house);

int count_potential_homes(house_t house[], int size);


#endif //HOUSE_HOUSE_H
