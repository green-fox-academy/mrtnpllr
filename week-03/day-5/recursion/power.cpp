#include <iostream>

//Given base and n that are both 1 or more, compute recursively (no loops) the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int powerN(int base, int n);

int main()
{
    std::cout << powerN(5, 2) << std::endl;

    return 0;
}

int powerN(int base, int n)
{
    if (n == 0) {
        return 1;
    } else {
        return base * powerN(base, n - 1);
    }
}