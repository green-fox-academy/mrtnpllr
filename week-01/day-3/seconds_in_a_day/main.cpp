#include <iostream>
#include <time.h>

int main(int argc, char* args[]) {

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    int currentTimeSeconds = (currentHours * 60*60) + (currentMinutes * 60) + currentSeconds;
    int secondsInaDay = 86400;

    std::cout << "Remaining seconds from the day: " << secondsInaDay - currentTimeSeconds << std::endl;

    return 0;
}