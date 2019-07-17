#include "CountLetters.h"

std::map<char, int> stringToMap(std::string str)
{
    std::map<char, int> mappedString;

    for (int i = 0; i < str.length(); ++i) {
        if (mappedString.find(str[i]) == mappedString.end()) {
            mappedString.insert(std::make_pair(str[i], 1));
        } else {
            mappedString[str[i]]++;
        }
    }
    return mappedString;
}