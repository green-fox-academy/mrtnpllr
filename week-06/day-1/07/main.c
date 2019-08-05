#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

double calculate_circle_area(double r);

int main()
{
    // define a variable called PI with the value of 3.14
    // create a function which takes the radius of a circle as a parameter
    // and return the area of that cirle
    // area = radius * radius * PI

    double radius_one = 10;
    double radius_two = 30.34;
    double radius_three = 500;
    double radius_four = 0;
    double radius_five = -5.45;

    printf("The radius of circle: %lf\n", calculate_circle_area(radius_one));
    printf("The radius of circle: %lf\n", calculate_circle_area(radius_two));
    printf("The radius of circle: %lf\n", calculate_circle_area(radius_three));
    printf("The radius of circle: %lf\n", calculate_circle_area(radius_four));
    printf("The radius of circle: %lf\n", calculate_circle_area(radius_five));

    return 0;
}

double calculate_circle_area(double r)
{
    if (r <= 0) {
        return -1;
    } else {
        return r * r * PI;
    }
}