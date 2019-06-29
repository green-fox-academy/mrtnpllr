#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main(int argc, char* args[])

{
    int aj[5] = {3, 4, 5, 6, 7};

    for (int i = 0; i < (sizeof(aj) / sizeof(aj[0])) / 2; ++i) {
        std::swap(aj[i], aj[(sizeof(aj) / sizeof(aj[0])) - i - 1]);
    }

    for (int j : aj) {
        std:: cout << j << std::endl;
    }

    return 0;
}