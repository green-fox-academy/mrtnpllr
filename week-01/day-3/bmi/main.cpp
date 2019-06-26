#include <iostream>

int main(int argc, char* args[]) {

    // Print the Body mass index (BMI) based on these values

    double massInKg = 82.2;
    double heightInM = 1.78;

    std::cout << "BMI index: " << (massInKg / (heightInM * heightInM)) << std::endl;

    return 0;
}