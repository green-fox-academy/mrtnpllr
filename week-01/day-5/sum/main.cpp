#include <iostream>
#include <string>

int sum (int a);

int main(int argc, char* args[])
{
    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter

    std::cout << sum(10) << std::endl;

    return 0;
}

int sum (int a) {
    int sumOfNum = 0;

    for (int i = 0; i <= a ; ++i) {
        sumOfNum = sumOfNum + i;
    }

    return sumOfNum;
}