#include <iostream>
//Additional exercise

int main()
{
    int userGullible;

    while(userGullible != 5) {
        std::cout << "Enter a number:";
        std::cin >> userGullible;
    }
    if(userGullible == 5) {
        std::cout << "You weren't supposed to do that!";
    }

    return 0;
}