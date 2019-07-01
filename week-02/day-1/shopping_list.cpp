#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void shoppingCheck(std::vector<std::string> list);

int main(int argc, char* args[])
{
    /*We are going to represent a shopping list in a list containing strings.

    Create a list with the following items.
    Eggs, milk, fish, apples, bread and chicken
    Create an application which solves the following problems.
    Do we have milk on the list?
    Do we have bananas on the list?*/
    std::vector<std::string> shoppingList = {"eggs", "milk", "fish", "apples", "bread", "chicken"};

    shoppingCheck(shoppingList);

    return 0;
}

void shoppingCheck(std::vector<std::string> list) {
    std::string item = "milk";
    std::string item2 = "bananas";

    if (std::find(list.begin(), list.end(), item) != list.end()) {
        std::cout << item << " is on the list." << std::endl;
    }else {
        std::cout << item << " is NOT on the list" << std::endl;
    }

    if (std::find(list.begin(), list.end(), item2) != list.end()) {
        std::cout << item2 << " is on the list." << std::endl;
    }else {
        std::cout << item2 << " is NOT on the list" << std::endl;
    }
}