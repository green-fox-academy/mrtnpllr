#include <iostream>

int main(int argc, char* args[]) {

    // - Create an array variable named `r`
    //   with the following content: `[54, 23, 66, 12]`
    // - Print the sum of the second and the third element

    int r[] = {54, 23, 66, 12}; //Do I put spaces in between elements?
    int sumArray = 0;

    sumArray = r[1] + r[2];

    std::cout << "Sum of the 2. and 3. elements: " << sumArray << std::endl;

    return 0;
}