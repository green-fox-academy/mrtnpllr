#include "Apple.h"

std::string getApple()
{
    return "apple";
}

int getSum(std::vector<int> vec)
{
    int sum = 0;

    for (int i = 0; i < vec.size(); ++i) {
        sum = sum + vec[i];
    }

    return sum;
}