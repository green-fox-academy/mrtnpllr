#include <iostream>

//Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int addNumbers (int n);

int main()
{
    std::cout << addNumbers(100) << std::endl;

    return 0;
}

int addNumbers (int n)
{
    if (n == 1) {
        return 1;
    } else {
        return n + addNumbers(n - 1);
    }
}