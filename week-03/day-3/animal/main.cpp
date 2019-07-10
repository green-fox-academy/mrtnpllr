#include <iostream>
#include "Animal.h"

int main()
{
    Animal gorilla;

    for (int i = 0; i < 10; ++i) {
        gorilla.play();
    }

    std::cout << "The hunger level of gorilla after play is: " << gorilla.getHunger() << std::endl;
    std::cout << "The thirst level of gorilla after play is: " << gorilla.getThirst() << std::endl;

    for (int j = 0; j < 5; ++j) {
        gorilla.drink();
        gorilla.eat();
    }

    std::cout << "The hunger level of gorilla after eating is: " << gorilla.getHunger() << std::endl;
    std::cout << "The thirst level of gorilla after drinking is: " << gorilla.getThirst() << std::endl;

    return 0;
}