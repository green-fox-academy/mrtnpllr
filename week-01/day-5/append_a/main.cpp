#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    std::string animals[3] = {"koal", "pand", "zebr"};

    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]) ; ++i) {
        std:: string a = "a";
        animals[i] += a;
    }

    std::cout << animals[1] << std::endl;

    return 0;
}