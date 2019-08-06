#include "Sandwich.h"

/*Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order*/

int get_price(sandwich_t sandwich, int number_of_order)
{
   return (float)number_of_order * sandwich.price;
}