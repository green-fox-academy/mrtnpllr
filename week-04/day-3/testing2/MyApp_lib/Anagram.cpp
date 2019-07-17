#include "Anagram.h"

bool isAnagram(std::string str1, std::string str2)
{

    if(str1.length() != str2.length()) {
        return false;
    }

    int s1[256] = {0};
    int s2[256] = {0};
    
    for (int i = 0; i < str1.length(); ++i) {
        s1[str1[i]]++;
        s2[str2[i]]++;
    }

    for (int j = 0; j < 256; ++j) {
        if (s1[j] != s2[j]) {
            return false;
        }
    }
    return true;
}