#include <iostream>
//Basic Calculator exercise

int main()
{
    int num1;
    int num2;
    char choice;
    char exitChar = 'N';

    while(exitChar != 'Y') {
        std::cout << "Plese enter two numbers to perform operations" << std::endl;
        std::cin >> num1;
        std::cin >> num2;
        std::cout << "What would you like to do? \n ADD(+) SUBSTRACT(-) MULTIPLY(*) DIVIDE(/)" << std::endl;
        std::cin >> choice;

        if (choice == '+') {
            std::cout << num1 + num2 << std::endl;
        } else if (choice == '-') {
            std::cout << num1 - num2 << std::endl;
        } else if (choice == '*') {
            std::cout << num1 * num2 << std::endl;
        } else if (choice == '/') {
            if(num2 != 0) {
                std::cout << num1 / num2 << std::endl;
            }else {
                std::cout << "You can't divide by zero!";
            }
        } else {
            std::cout << "Invalid character";
        }

        std::cout << "Do you want to exit? (Y/N)" << std::endl;
        std::cin >> exitChar;
    }

    return 0;
}