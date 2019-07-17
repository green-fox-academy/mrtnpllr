#include <gtest/gtest.h>
#include "Anagram.h"

TEST(anagram_check, check_anagram) {
    std::string str1 = "god";
    std::string str2 = "dog";

    EXPECT_EQ(isAnagram(str1, str2), true);
}

TEST(anagram_check, check_anagram2) {
    std::string str1 = "godmamamsd3am";
    std::string str2 = "dogsdf234g";

    EXPECT_EQ(isAnagram(str1, str2), false);
}

