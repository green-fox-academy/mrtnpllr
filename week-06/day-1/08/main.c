#include <stdio.h>
#include <stdlib.h>

int can_buy_alcohol(int age);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age_of_user;

    printf("Enter your age:\n");
    scanf("%d", &age_of_user);

    printf("%d", can_buy_alcohol(age_of_user));

    return 0;
}

int can_buy_alcohol(int age)
{
    if (age >= 18) {
        return 1;
    } else {
        return 0;
    }
}