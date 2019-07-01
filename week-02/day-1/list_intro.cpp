#include <iostream>
#include <vector>

int main(int argc, char *args[])
{
    std::vector<std::string> names;

    std::cout << names.size() << std::endl;

    names.push_back("William");

    std::cout << std::boolalpha << names.empty() << std::endl;

    names.push_back("John");
    names.push_back("Amanda");

    std::cout << names.size() << std::endl;
    std::cout << std::endl; //For readability purposes.

    for (unsigned int i = 0; i < names.size(); ++i) {
        std::cout << names[i] << std::endl;
    }

    std::cout << std::endl;

    for (int j = 0; j < names.size(); ++j) {
        std::cout << j + 1 << ". " << names[j] << std::endl;
    }

    names.erase(names.begin() + 1);

    for (int k = names.size(); k >= 0; --k) {
        std::cout << names[k] << std::endl;
    }

    return 0;
}