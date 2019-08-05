#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main()
{
    //Continue working on the pi.c project
    //
    //Organize the function from the previous exercise to separate .c and .h files
    //Create another function which calculates the circumference of a circle
    //the radius of the circle should be passed as a parameter
    //the function should return the calculated circumference
    //circumference = 2 * radius * PI
    //this function should be in the same .c and .h files as the one which calculates the area

    double radius_one = 10;
    double radius_two = 30.34;
    double radius_three = 500;
    double radius_four = 0;
    double radius_five = -5.45;

    printf("The area of circle: %lf\n", calculate_circle_area(radius_one));
    printf("The area of circle: %lf\n", calculate_circle_area(radius_two));
    printf("The area of circle: %lf\n", calculate_circle_area(radius_three));
    printf("The area of circle: %lf\n", calculate_circle_area(radius_four));
    printf("The area of circle: %lf\n", calculate_circle_area(radius_five));

    printf("The circumference of circle: %lf\n", calculate_circle_area(radius_one));
    printf("The circumference of circle: %lf\n", calculate_circle_area(radius_two));
    printf("The circumference of circle: %lf\n", calculate_circle_area(radius_three));
    printf("The circumference of circle: %lf\n", calculate_circle_area(radius_four));
    printf("The circumference of circle: %lf\n", calculate_circle_area(radius_five));

    return 0;
}