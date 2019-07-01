#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(int argc, char *args[])
{
    //Create a list ('List A') which contains the following values: Apple, Avocado, Blueberries, Durian, Lychee
    std::vector<std::string> A = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};

    //Create a new list ('List B') with the values of List A
    std::vector<std::string> B = A;

    //Print out whether List A contains Durian or not
    if (std::find(A.begin(), A.end(), "Durian") != A.end())
        std::cout << "A containts \"Durian\"" << std::endl;

    //Remove Durian from List B
    B.erase(B.begin() + 3);

    //Add Kiwifruit to List A after the 4th element
    A.push_back("Kiwifruit");

    //Compare the size of List A and List B
    std::cout << A.size() << " | " << B.size() << std::endl;

    //Get the index of Avocado from List A
    for (unsigned int i = 0; i < A.size(); ++i) {
        if (A.at(i) == "Avocado") {
            std::cout << i << std::endl;
        }
    }

    //Get the index of Durian from List B
    for (unsigned int j = 0; j < B.size(); ++j) {
        if (B.at(j) == "Durian") {
            std::cout << j << std::endl;
        }
    }

    // Add Passion Fruit and Pomelo to List B in a single statement
    A.insert(A.end(), {"Passion Fruit", "Pomelo"});

    //Print out the 3rd element from List A
    std::cout << A[2] << std::endl;

    return 0;
}