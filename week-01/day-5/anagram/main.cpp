#include <iostream>
#include <string>

void isAnagram(std::string str1, std::string str2);

int main()
{
    std::string str1;
    std::string str2;

    std::cout << "Please enter two words, I will check whether they are anagrams or not." << std::endl;
    std::cin >> str1;
    std::cin >> str2;

    isAnagram(str1, str2);

    return 0;
}

void isAnagram(std::string str1, std::string str2) {
    char varIndex;
    char varIndex2;
    int sum1 = 0;
    int sum2 = 0;

    if(str1.length() == str2.length()){
        for (int i = 0; i < str1.size(); ++i) {
            varIndex = str1.at(i);
            varIndex2 = str2.at(i);
            int x = varIndex - 0;
            int y = varIndex2 - 0;
            sum1 = sum1 + x;
            sum2 = sum2 + y;
        }
        if(sum1 == sum2) {
            std::cout << str1 << " and " << str2 << " are anagrams." <<std::endl;
        }else {
            std::cout << str1 << " and " << str2 << " are NOT anagrams!" << std::endl;
        }
    }else {
        std::cout << str1 << " and " << str2 << " are NOT anagrams!" << std::endl;
    }
}