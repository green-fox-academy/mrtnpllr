#include <iostream>

//We have a number of bunnies and each bunny has two big floppy ears.
//We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int calculateBunnies(int bunnies);

int main()
{
    int bunnies;

    std::cout << "How manny fluffy bunnies floppy ears would you like to count?" << std::endl;
    std::cin >> bunnies;

    std::cout << "Number of ears all together: " << calculateBunnies(bunnies) << std::endl;

    return 0;
}

int calculateBunnies(int bunnies)
{
    if (bunnies == 0) {
        return bunnies;
    } else {
        return 2 + (calculateBunnies(bunnies - 1));
    }
}