#include <iostream>
#include "Animals.h"

int main()
{
    Animals MonkeyBaby;


    for (int i = 0; i < 10; ++i) {
        MonkeyBaby.play();
    }

    std::cout << "Hunger level of Monkey Baby: " <<MonkeyBaby.getHunger() << std::endl;

    for (int j = 0; j < 60; ++j) {
        MonkeyBaby.eat();
    }

    std::cout << "Thirst level of Monkey Baby: " << MonkeyBaby.getThirst() << std::endl << "Hunger level of Monkey Baby: " << MonkeyBaby.getHunger() << std::endl;

    Animals ElephantBaby;

    ElephantBaby.drink();
    ElephantBaby.play();

    std::cout << "Thirst level of Elephant Baby: " << ElephantBaby.getThirst() << std::endl << "Hunger level of Elephant Baby: " << ElephantBaby.getHunger() << std::endl;

    return 0;
}