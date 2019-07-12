#include <iostream>

int calculateGreatestCommDiv(int a, int b);


int main()
{
    std::cout << calculateGreatestCommDiv(48, 18);

    return 0;
}

int calculateGreatestCommDiv(int a, int b)
{
    if (b == 0) {
        return a;
    } else {
        return (calculateGreatestCommDiv(b, a % b));
    }
}