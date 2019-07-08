#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copyFile(std::string filename1, std::string filename2);

int main()
{
    std::string path = "../my-file.txt";
    std::string copy = "../cp.txt";

    std::cout << std::boolalpha << copyFile(path, copy);

    return 0;
}

bool copyFile(std::string filename1, std::string filename2)
{
    std::fstream fileOpener(filename1, std::ios::in);
    std::string lineHolder;
    std::fstream fileWriter(filename2, std::ios::out);

    if (fileOpener.is_open()) {
        while (std::getline(fileOpener, lineHolder)) {
            fileWriter << lineHolder << std::endl;
        }
        fileOpener.close();
        fileWriter.close();
        return true;
    }
}