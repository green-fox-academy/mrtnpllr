#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory

    std::fstream createFile("../my-file.txt", std::ios::out);

    std::string lines = "First line\nSecond line\nThird line\n";
    createFile << lines;

    createFile.close();

    createFile.open("../my-file.txt", std::ios::in);
    std::string linesOut;
    if (createFile.is_open()) {
        while (std::getline(createFile, linesOut)) {
            std::cout << linesOut << std::endl;
        }
        createFile.close();
    }

    return 0;
}