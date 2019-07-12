#include <iostream>

//Given a string, compute recursively (no loops) a new string where all the lowercase 'x' chars have been changed to 'y' chars.

std::string convertString(std::string input, int i);

int main()
{
    std::string test = "32ss dsf ss aa yy xx x xXXdfksjflskfxxxdlkfjslfdxXxYjsldkxxyyxxyYxyxlkjfdsljXfxxx";
    int counter = 0;

    std::cout << convertString(test, counter);

    return 0;
}

std::string convertString(std::string input, int i)
{
    if (i == input.length()) {
        return input;
    } else if (input[i] == 'x') {
        input[i] = 'y';
        return convertString(input, i + 1);
    } else {
        return convertString(input, i + 1);
    }
}