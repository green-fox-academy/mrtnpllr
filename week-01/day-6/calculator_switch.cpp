#include <iostream>
//Basic Calculator exercise with switch

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

        switch(choice) {
            case '+':
                std::cout << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << num1 * num2 << std::endl;
                break;
            case '/':
                if(num2 != 0) {
                    std::cout << num1 / num2 << std::endl;
                    break;
                }else {
                    std::cout << "You cant divide by zero!";
                    break;
                }
            default:
                std::cout << "Invalid character" << std::endl;
                break;
        }

        std::cout << "Do you want to exit? (Y/N)" << std::endl;
        std::cin >> exitChar;
    }

    return 0;
}