#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that prints all the even numbers between 0 and 500

    for (int i = 0; i <= 500; i++) {
        if (i % 2 == 0) {
            std::cout << i << std::endl;
       }
    }

    //Another solution with while loop

    std::cout << "Solution with while: \n" << std::endl;

    int a = 0;

    while(a <= 500) {
        a++;
        if (a % 2 == 0) {
            std::cout << a << std::endl;
        }
    }

    return 0;
}