#include <iostream>

int arrayIndexSearcher(int array[], int arraySize, int number);

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1
    int arr[] = {3, 2, 2, 3, 3, 5, 4, 3, 6, 7, 3, 2, 3, 4, 1};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int num = 7;

    std::cout << arrayIndexSearcher(arr, sizeOfArray, num) << std::endl;

    return 0;
}

int arrayIndexSearcher(int array[], int arraySize, int number)
{
    for (int i = 0; i < arraySize; i++) {
        if (number == array[i]) {
            return i;
        }
    }

    return -1;
}