#include <iostream>
#include <string>
#include <vector>

void createPalindrome(std::string str);

int main(int argc, char* args[])
{
    std::string word;

    std::cout << "Enter a word, I will make a palindrome from it!" << std::endl;
    std::cin >> word;

    createPalindrome(word);

    return 0;
}

void createPalindrome(std::string str){
    std::vector <char> wordVector;
    std::vector <char> wordVector2;

    for (int i = 0; i < str.size(); ++i) {
        wordVector.push_back(str.at(i));
    }

    wordVector2 = wordVector;

    for (int j = 0; j < str.size() / 2; j++) {
        std::swap(wordVector[j], wordVector[(wordVector.size()) - j - 1]);
    }

    std::string palindrome( wordVector.begin(), wordVector.end() );
    std::string palindrome2( wordVector2.begin(), wordVector2.end() );

    palindrome2.append(palindrome);

    std::cout << palindrome2 << std::endl;
}