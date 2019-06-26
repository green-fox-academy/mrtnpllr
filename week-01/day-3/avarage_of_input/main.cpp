#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int a;
    int b;
    int c;
    int d;
    int e;

    std::cout << "Give me five numbers (Press enter after each input)!" << std::endl;
    std::cin >> a >> b >> c >> d >> e;

    int sum = a + b + c + d + e;
    int average = ((a + b + c + d + e) / 5);

    std::cout << "Sum: " << sum << ", Average: " << average << std::endl;

    return 0;

}