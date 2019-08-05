#include "Functions.h"

int are_sum_of_digits_equal(int a, int b)
{
    int sum1 = 0;
    int sum2 = 0;
    int remainder;
    int remainder2;

    while (a != 0) {
        remainder = a % 10;
        sum1 = sum1 + remainder;
        a = a / 10;
    }

    while (b != 0) {
        remainder2 = b % 10;
        sum2 = sum2 + remainder2;
        b = b / 10;
    }

    if (sum1 == sum2) {
        return 1;
    }
    return 0;
}