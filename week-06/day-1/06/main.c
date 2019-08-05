#include <stdio.h>

int main()
{
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stroed number is lower
    // You found the number: 8

    int secret_number = 42;
    int guess_number;

    printf("Guess the number!");

    do {
        int ret = scanf("%d", &guess_number);

        if (ret <= 0) {
            printf("You messed up! Good bye!\n");
            break;
        }

        if(guess_number < secret_number) {
            printf("The stored number is higher\nYour guess was: %d", guess_number);
        } else if (guess_number > secret_number) {
            printf("The stored number is lower\nYour guess was: %d", guess_number);
        } else if (guess_number == secret_number) {
            printf("The stored number is:%d", secret_number);
        }
    } while (secret_number != guess_number);

    return 0;
}