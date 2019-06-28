#include <iostream>
#include <string>

int main(int argc, char* args[])

{

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[5] = {3, 4, 5, 6, 7};

    for (int i = 0; i < sizeof(aj) / sizeof(aj[0]); ++i) {
        for (int j = 0; j < sizeof(aj) / sizeof(aj[0]) ; ++j) {
            for (int k = 0; k < sizeof(aj) / sizeof(aj[0]) ; ++k) {
                aj[i] = aj [j];
            }

        }
    }

    std::cout << aj[1];

    return 0;
}