#include <iostream>

int main(int argc, char* args[]) {

   int array1[5] = {3,4,2,5,2};

    for (int x = 0; x <= 5 ; ++x) {
        std::cout << "The elements of array1: " << array1[x] << std::endl;
    }

return 0;
}