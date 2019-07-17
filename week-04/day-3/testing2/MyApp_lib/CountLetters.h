#ifndef MYAPP_COUNTLETTERS_H
#define MYAPP_COUNTLETTERS_H

#include <map>
#include <string>

//Write a function, that takes a string as an argument and returns a dictionary with all letters in the string as keys,
//and numbers as values that shows how many occurrences there are.
//Create a test for that.

std::map<char, int> stringToMap(std::string str);

#endif //MYAPP_COUNTLETTERS_H
