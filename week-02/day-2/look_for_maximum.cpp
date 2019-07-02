#include <iostream>

void biggestNumber(int arr[], int sizeOfArray);

int main()
{
    // Create a program which first asks for a number++
    // this number indicates how many integers we want to store in an array++
    // and than asks for numbers till the user fills the array++
    // It should print out the biggest number in the given array and the memory address of it+
    int num;

    std::cout << "Give me a number:";
    std::cin >> num;

    int array[num];

    for (int i = 0; i < num; ++i) {
        std::cout << "Give me more numbers!" << std::endl;
        std::cin >> array[i];
        std::cout << std::endl;
    }

    int sizeOfArray = sizeof(array) / sizeof(array[0]);

    biggestNumber(array, sizeOfArray);

    return 0;
}

void biggestNumber(int arr[], int sizeOfArray)
{
    int max = 0;
    int *arrPtr = arr;

    for (int i = 0; i < sizeOfArray; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            arrPtr = &max;
        }
    }

    std::cout << max << std::endl << arrPtr << std::endl;
}