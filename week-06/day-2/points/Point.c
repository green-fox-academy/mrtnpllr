#include <math.h>
#include "Point.h"

point_t make_point(float x, float y)
{
    point_t new_point;
    new_point.x = x;
    new_point.y = y;

    return new_point;
}

float distance (point_t p1, point_t p2)
{
    return sqrt((pow(p2.x, 2) - pow(p1.x, 2)) + (pow(p2.y, 2) - pow(p1.y, 2)));
}