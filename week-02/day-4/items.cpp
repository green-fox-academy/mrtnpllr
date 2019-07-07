#include <iostream>
#include <fstream>

int main ()
{
    //std::ofstream myfile;
    //myfile.open ("example.txt");
    //The above way is equivalent;
    std::ofstream myfile ("example.txt");
    if (myfile.is_open()) {
        myfile << "This is going to appear in the txt. \n";
        myfile << "And another line. \n";
        myfile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
    return  0;
}