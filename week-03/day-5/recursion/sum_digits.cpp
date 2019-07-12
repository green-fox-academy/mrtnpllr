#include <iostream>

//Sum Digits
//Given a non-negative integer n, return the sum of its digits recursively (without loops).
//
//Hint
//Mod (%) by 10 yields the rightmost digit (e.g. 126 % 10 is 6)

int sumDigits(int n);

int main()
{
    std::cout << sumDigits(1555);

    return 0;
}

int sumDigits(int n)
{
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumDigits(n / 10);
    }
}