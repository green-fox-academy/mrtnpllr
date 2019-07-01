#include <iostream>
#include <map>
#include <string>

void phoneBookSearch(std::map<std::string, std::string> book);

int main(int argc, char *args[])
{
    /*We are going to represent our contacts in a map where
    the keys are going to be strings and the values are going to be strings as well.

    Create a map with the following key-value pairs.

    Name (key)	Phone number (value)
    William A. Lathan	405-709-1865
    John K. Miller	402-247-8568
    Hortensia E. Foster	606-481-6467
    Amanda D. Newland	319-243-5613
    Brooke P. Askew	307-687-2982
    Create an application which solves the following problems.

    What is John K. Miller's phone number?
    Whose phone number is 307-687-2982?
    Do we know Chris E. Myers' phone number? --> No way.*/

    std::map<std::string, std::string> phoneBook = {
            {"William A. Lathan",   "405-709-1865"},
            {"John K. Miller",      "402-247-8568"},
            {"Hortensia E. Foster", "606-481-6467"},
            {"Amanda D. Newland",   "319-243-5613"},
            {"Brooke P. Askew",     "307-687-2982"}
    };

    phoneBookSearch(phoneBook);

    return 0;
}

void phoneBookSearch(std::map<std::string, std::string> book)
{
    std::cout << book.at("William A. Lathan") << std::endl;

    std::map<std::string, std::string>::iterator it;

    for (it = book.begin(); it != book.end(); it++) {
        if (it->second == "307-687-2982") {
            std::cout << it->first << std::endl;
        }
    }
}