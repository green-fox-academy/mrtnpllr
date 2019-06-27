#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    std::string name = "Marton Piller";
    int age = 28;
    double height = 1.82;
    bool isMarried = false;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;

    if (isMarried == false) {

        std::cout << "Marital status: Not married" << std::endl;
    }else {

        std::cout << "Marital status: Married" << std::endl;
    }

    return 0;
}