#include <iostream>
#include <vector>

//We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies (1, 3, ..) have the normal 2 ears.
//The even bunnies (2, 4, ..) we'll say have 3 ears, because they each have a raised foot.
//Recursively return the number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

int calculateBunnies(int bunnies);

int main()
{
    int bunnies;
    bool isEven = true;

    std::cout << "Number of ears all together: " << calculateBunnies(3) << std::endl;

    return 0;
}


int calculateBunnies(int bunnies)
{
    if (bunnies == 0) {
        return 0;
    } else if (bunnies % 2 != 0) {
        return 2 + (calculateBunnies(bunnies - 1));
    } else {
        return 3 + (calculateBunnies(bunnies - 1));
    }
}