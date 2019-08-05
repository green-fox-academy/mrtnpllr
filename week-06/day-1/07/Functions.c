#include "Functions.h"

double calculate_circle_area(double r)
{
    if (r <= 0) {
        return -1;
    } else {
        return r * r * PI;
    }
}

double calculate_circle_circumference(double r)
{
    if (r <= 0) {
        return -1;
    } else {
        return 2 * r * PI;
    }
}