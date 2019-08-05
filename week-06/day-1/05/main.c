#include <stdio.h>

double calculate_surface_area(double a, double b, double c);

double calculate_volume(double a, double b, double c);

int main()
{
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    // Surface Area: 600
    // Volume: 1000

    double side_one;
    double side_two;
    double side_three;

    printf("Enter the first side of cuboid:\n");
    scanf("%lf", &side_one);
    printf("Enter the second side of cuboid:\n");
    scanf("%lf", &side_two);
    printf("Enter the third side of cuboid:\n");
    scanf("%lf", &side_three);

    printf("side one: %lf\nside two: %lf\nside three: %lf\n", side_one, side_two, side_three);
    printf("Surface area: %.0lf\n", calculate_surface_area(side_one, side_two, side_three));
    printf("Volume: %.0lf\n", calculate_volume(side_one, side_two, side_three));

    return 0;
}

double calculate_surface_area(double a, double b, double c)
{
    return 2 * (a * b + a * c + c * b);
}

double calculate_volume(double a, double b, double c)
{
    return a * b * c;
}