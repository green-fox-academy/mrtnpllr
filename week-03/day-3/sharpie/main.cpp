#include <iostream>
#include "Sharpie.h"

int main()
{
    Sharpie yellow("Yellow", 0.4);

    for (int i = 0; i < 30; ++i) {
        yellow.use();
    }

    std::cout << yellow.getInkAmount() << std::endl;

    return 0;
}