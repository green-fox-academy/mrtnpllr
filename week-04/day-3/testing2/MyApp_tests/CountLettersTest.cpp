#include <gtest/gtest.h>
#include "CountLetters.h"
#include <iostream>


TEST(count_letters, base_case)
{

    std::map<char, int>::iterator it;

    std::map<char, int> map = stringToMap("aaabdaadgftr");

    it = map.begin();

    for (; it != map.end(); ++it) {
        std::cout << it->first << ": ";
        std::cout << it->second << std::endl;
    }
}