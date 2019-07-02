#include <iostream>

void arrayFunction (int numArr[], int sizeOfArr);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int sizeOfArr = sizeof(numbers) / sizeof(numbers[0]);

    arrayFunction(numbers, sizeOfArr);

    return 0;
}

void arrayFunction (int numArr[], int sizeOfArr){
    int *ptrMin;
    int min = 100000000;

    for (int i = 0; i < sizeOfArr; ++i) {
        if (min > numArr[i]) {
            min = numArr[i];
        }
        std::cout << numArr[i] << std::endl;
        std::cout << min << std::endl;
    }
}