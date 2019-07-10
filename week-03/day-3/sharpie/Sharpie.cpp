#include "Sharpie.h"

Sharpie::Sharpie()
{
    _inkAmount = 100;
}

Sharpie::Sharpie(std::string color, float width) : _inkAmount(100)
{}

float Sharpie::getInkAmount()
{
    return _inkAmount;
}

float Sharpie::use()
{
    return _inkAmount--;
}