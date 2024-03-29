#include <iostream>
#include <map>

int main(int argc, char *args[])
{
    //We are going to play with maps. Feel free to use the built-in methods where possible.

    //Create an empty map where the keys are integers and the values are characters
    std::map<int, char> myMap;

    //Print out whether the map is empty or not
    std::cout << std::boolalpha << myMap.empty() << std::endl;

    //Add the following key-value pairs to the map | Key | Value | | :-- | :---- | | 97 | a | | 98 | b | | 99 | c | | 65 | A | | 66 | B | | 67 | C |
    myMap.insert(std::make_pair(97, 'a'));
    myMap.insert(std::make_pair(98, 'b'));
    myMap.insert(std::make_pair(99, 'c'));
    myMap.insert(std::make_pair(65, 'A'));
    myMap.insert(std::make_pair(66, 'B'));
    myMap.insert(std::make_pair(67, 'C'));

    //Print all the keys|Print all the values
    std::map<int, char>::iterator it;

    for (it = myMap.begin(); it != myMap.end(); it++) {
        std::cout << it->first << " ";
        std::cout << it->second << std::endl;
    }

    //Add value D with the key 68
    myMap.insert(std::make_pair(68, 'D'));

    //Print how many key-value pairs are in the map
    std::cout << myMap.size() << std::endl;

    //Print the value that is associated with key 99
    std::cout << myMap[99] << std::endl;

    //Remove the key-value pair where with key 97
    myMap.erase(97);

    //Print whether there is an associated value with key 100 or not
    if (myMap.find(100) == myMap.end()) {
        std::cout << false << std::endl;
    }

    //Remove all the key-value pairs*
    myMap.clear();

    return 0;
}