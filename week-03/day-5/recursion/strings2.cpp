#include <iostream>
#include <string>

//Given a string, compute recursively a new string where all the 'x' chars have been removed.

std::string convertString(std::string input, int i);

int main()
{
    std::string test = "xxxx 24323x sdfs sdfsdflkkv xx ynxnyly xyxnyxldsfdfksdfklsdlkfsdlfk";
    int counter = 0;

    std::cout << convertString(test, counter);

    return 0;
}

std::string convertString(std::string input, int i)
{
    if (i == input.length()) {
        return input;
    } else if (input[i] == 'x') {
        input.erase(i, 1);
        return convertString(input, i);
    } else {
        return convertString(input, i + 1);
    }
}