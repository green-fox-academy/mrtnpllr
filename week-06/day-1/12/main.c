#include <stdio.h>
#include <stdlib.h>

int is_prime(int num);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    printf("%d", is_prime(num));

    return 0;
}

int is_prime(int num)
{
    int flag = 0;

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        return 1;
    }
    return 0;
}