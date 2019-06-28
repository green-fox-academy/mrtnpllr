#include <iostream>
#include <string>

void factorio(int a, int &b);

int main(int argc, char* args[])
{
    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.
    /* It breaks at 17, but precise until that point. */

    int num1 = 10;
    int num2 = 23;

    factorio(num1, num2);

    return 0;
}

void factorio(int a, int &b) {

    int factOfNum = 1;

    for (int i = 1; i <= a ; ++i) {
        factOfNum = factOfNum * i;
    }

    b = factOfNum;
}