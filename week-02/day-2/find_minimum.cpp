#include <iostream>

int *arrayFunction(int numArr[], int sizeOfArr);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int sizeOfArr = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << *arrayFunction(numbers, sizeOfArr) << std::endl;

    return 0;
}

int *arrayFunction(int numArr[], int sizeOfArr)
{
    int *ptrMin = &numArr[0];

    for (int i = 0; i < sizeOfArr; ++i) {
        if (*ptrMin > numArr[i]) {
            ptrMin = &numArr[i];
        }
    }
    return ptrMin;
}