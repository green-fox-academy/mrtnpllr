#ifndef POINTS_POINT_H
#define POINTS_POINT_H


typedef struct point
{
    float x;
    float y;

} point_t;

point_t make_point(float x, float y);

float distance (point_t p1, point_t p2);


#endif //POINTS_POINT_H
