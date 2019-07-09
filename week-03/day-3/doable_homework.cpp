#include <iostream>
#include <map>
#include <string>

/*
Create 5 trees
Store the data of them in variables in your program
for every tree the program should store its'
type
leaf color
age
sex
you can use just variables, or lists and/or maps
 */

int main ()
{
    std::map<std::string, std::string> treeOne = {
            {"type", "Oak"},
            {"leaf color", "dark green"},
            {"age", "123"},
            {"sex", "male"},
    };

    std::map<std::string, std::string> treeTwo = {
            {"type", "Maple"},
            {"leaf color", "dark orange"},
            {"age", "50"},
            {"sex", "female"},
    };

    std::map<std::string, std::string> treeThree = {
            {"type", "Cyprus"},
            {"leaf color", "dark green"},
            {"age", "89"},
            {"sex", "male"},
    };

    std::map<std::string, std::string> treeFour = {
            {"type", "Pine"},
            {"leaf color", "light green"},
            {"age", "12"},
            {"sex", "female"},
    };

    std::map<std::string, std::string> treeFive = {
            {"type", "Palm"},
            {"leaf color", "bright green"},
            {"age", "32"},
            {"sex", "female"},
    };

    return 0;
}