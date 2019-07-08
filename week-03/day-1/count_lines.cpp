#include <iostream>
#include <fstream>
#include <string>

int readingFunction(std::string filename);

int main()
{
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::cout << readingFunction("../my-file.txt");

    return 0;
}

int readingFunction(std::string filename)
{
    std::fstream openFile(filename, std::ios::in);
    int numLines = 0;
    if (openFile.is_open()) {
        std::ifstream in(filename);
        std::string unused;
        while (std::getline(in, unused))
            ++numLines;
    }
    return numLines;
}