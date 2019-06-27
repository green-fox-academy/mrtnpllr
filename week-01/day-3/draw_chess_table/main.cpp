#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that draws a chess table like this
    //
    // % % % % 
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % % 
    //  % % % %

    std::string str1 = "% % % %";
    std::string str2 = " % % % %";

    for (int i = 1; i <= 8 ; ++i) {

        std::cout << str1 << std::endl;
        std::cout << str2 << std::endl;
        
    }

    return 0;
}