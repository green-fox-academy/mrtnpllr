#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Open a file called "my-file.txt"
    // Write your name in it as a single line
    std::fstream openFile("../my-file.txt", std::ios::out | std::ios::app);
    std::string myName = "Piller Marton";

    openFile << myName;
    
    openFile.close();

    return 0;
}