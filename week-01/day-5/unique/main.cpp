#include <iostream>
#include <string>
#include <vector>

void unique(int arr[], int sizeOfArr);

int main(int argc, char *args[])
{

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    //int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    //std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`

    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int sizeOfList = sizeof(numbers) / sizeof(numbers[0]);

    unique(numbers, sizeOfList);

    return 0;
}

void unique(int arr[], int sizeOfArr)
{
    int min = 0;
    std::vector<int> newList;

    for (int i = 0; i < sizeOfArr; ++i) {
        if (min < arr[i]) {
            min = arr[i];
            newList.push_back(min);
        }
    }
    for (int j = 0; j < newList.size(); ++j) {
        std::cout << newList[j] << std::endl;
    }
}