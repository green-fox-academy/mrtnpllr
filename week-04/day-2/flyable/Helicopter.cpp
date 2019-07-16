#include "Helicopter.h"

Helicopter::Helicopter(int mass, int velocity, int accelaration) : Vehicle(mass, velocity, accelaration)
{}

std::string Helicopter::land()
{
    return std::string ("Hello from land function");
}

std::string Helicopter::fly()
{
    return std::string("Hello from fly function");
}

std::string Helicopter::takeOff()
{
    return std::string("Hello from takeOff function");
}
