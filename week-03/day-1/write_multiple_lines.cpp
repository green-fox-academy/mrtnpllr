#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

void writeMultipleLines(std::string path, std::string word, int num);

int main()
{

    int numberOfLines;
    std::string wordInput;
    std::string path = "../write_multiple_lines.txt";

    std::cout << "Give me a word, and a number" << std::endl;
    std::cin >> wordInput;
    std::cin >> numberOfLines;

    writeMultipleLines(path, wordInput, numberOfLines);

    return 0;
}

void writeMultipleLines(std::string path, std::string word, int num)
{
    std::fstream fileOpener(path, std::ios::out);
    if (fileOpener.is_open()) {

        for (int i = 0; i < num; ++i) {
            fileOpener << word << "\n";
        }
    }

    fileOpener.close();
}