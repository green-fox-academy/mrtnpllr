#include <iostream>
#include "../zoo/Animal.h"
#include "../zoo/Bird.h"
#include "Helicopter.h"

int main()
{
    Helicopter apache(10,12,20);
    std::cout << apache.fly() << std::endl;
    std::cout << apache.land() << std::endl;
    std::cout << apache.takeOff() << std::endl;

    return 0;
}