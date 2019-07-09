#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

bool contains(std::vector<std::string> vectorIn, std::string checker);

std::vector<std::string> unique(std::vector<std::string> inputVector);

std::vector<std::string> getIpAddresses(std::string filename);

std::vector<std::string> getPost(std::string filename);

double getPostRatio(std::vector<std::string> vecIn);

//main function
int main()
{
    char choice;

    std::string path = "../log.txt";
    std::vector<std::string> tmpV = unique(getIpAddresses(path));

    std::cout << "The number of unique IP addresses: " << tmpV.size() << std::endl;
    std::cout << "The GET/POST ratio is: " << getPostRatio(getPost(path)) << std::endl;
    std::cout << "Do you wish to see the individual IP addresses? (Y/N)" << std::endl;

    std::cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        for (int i = 0; i < tmpV.size(); ++i) {
            std::cout << tmpV[i] << std::endl;
        }
    } else if (choice == 'N' || choice == 'n') {
        std::cout << "Goodbye!" << std::endl;
    } else {
        std::cout << "Invalid input!" << std::endl;
    }

    return 0;
}

//contains function
bool contains(std::vector<std::string> vectorIn, std::string checker)
{
    for (int i = 0; i < vectorIn.size(); ++i) {
        if (checker == vectorIn[i]) {
            return true;
        }
    }
    return false;
}

//unique function
std::vector<std::string> unique(std::vector<std::string> inputVector)
{
    std::vector<std::string> container;
    for (int i = 0; i < inputVector.size(); ++i) {
        if (!contains(container, inputVector[i])) {
            container.push_back(inputVector[i]);
        }
    }
    return container;
}

//getIpAddresses function
std::vector<std::string> getIpAddresses(std::string filename)
{
    std::fstream openFile(filename, std::ios::in);
    std::string readInData;
    std::string ipAddress;
    std::vector<std::string> ipArray;

    if (openFile.is_open()) {
        while (std::getline(openFile, readInData)) {
            std::istringstream delim(readInData);

            for (int i = 0; i < 9; ++i) {
                std::getline(delim, ipAddress, ' ');
            }
            ipArray.push_back(ipAddress);
        }
    }
    openFile.close();

    return ipArray;
}

//getPost function
std::vector<std::string> getPost(std::string filename)
{
    std::string readInData;
    std::string data;
    std::vector<std::string> getPostVector;

    std::fstream openFile(filename, std::ios::in);

    if (openFile.is_open()) {
        while (std::getline(openFile, readInData)) {
            std::istringstream delim(readInData);

            for (int i = 0; i < 12; ++i) {
                std::getline(delim, data, ' ');
            }
            getPostVector.push_back(data);
        }
    }

    openFile.close();

    return getPostVector;
}

//getPostRatio function
double getPostRatio(std::vector<std::string> vecIn)
{
    double counter1 = 0;
    double counter2 = 0;

    for (int i = 0; i < vecIn.size(); ++i) {
        if (vecIn.at(i) == "GET") {
            counter1++;
        } else if (vecIn.at(i) == "POST") {
            counter2++;
        }
    }

    return counter1 / counter2;
}

//Ha ebben a függvényben double typeot használok, jól visszaadja, de ha intet, akkor nem. Miért? A függvény doublet ad vissza.
//Két int elosztva miért nem lehet double, ha avisszatérési type double?