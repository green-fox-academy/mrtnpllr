#include "House.h"

int is_worth_to_buy(house_t *house)
{
    int price = house->price / house->area;
    int standard_market_price = 400;
    if (price <= standard_market_price) {
        return 1;
    }

    return 0;
}

//  house[i] =   *(house+i)
// &house[i] = &(*(house+i)) = house+i

int count_potential_homes(house_t house[], int size)
{
    //int counter = 0;
    int potential_homes = 0;


    //This is also valid
    /*while (counter != size) {
        if(is_worth_to_buy(&house[counter])) {
            potential_homes++;
        }
        counter++;
    }*/

    for (int i = 0; i < size; ++i) {
        if (is_worth_to_buy(house + i)) {
            potential_homes++;
        }
    }

    return potential_homes;
}