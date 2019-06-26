#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"

    std::string line = "I won't cheat on the exam!";

    for (int i = 0; i <= 100; i++) {
        std::cout << i << "." << line << std::endl;
    }

    return 0;
}