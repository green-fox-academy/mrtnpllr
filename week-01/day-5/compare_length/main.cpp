#include <iostream>

int main(int argc, char* args[]) {

    // - Create an array variable named `p1`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `p2`
    //   with the following content: `[4, 5]`
    // - Print "p2 is longer" if `p2` has more elements than `p1`

    int p1[] = {1,2,3};
    int p2[] = {4,5};

    if ((sizeof(p1) / sizeof(p1[0])) < (sizeof(p2) / sizeof(p2[0]))) {
        std::cout << "p2 is longer" << std::endl;
    } else {
        std::cout << "p1 is longer" << std::endl;
    }

    return 0;
}