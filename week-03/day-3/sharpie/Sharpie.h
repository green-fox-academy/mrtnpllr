#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>

class Sharpie
{
public:

    Sharpie();

    Sharpie(std::string color, float width);

    float getInkAmount();

    float use();

private:

    std::string _color;
    float _width;
    float _inkAmount;
};


#endif //SHARPIE_SHARPIE_H
