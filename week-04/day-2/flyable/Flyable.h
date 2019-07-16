#ifndef FLYABLE_FLYABLE_H
#define FLYABLE_FLYABLE_H

#include <string>

class Flyable
{
public:
    Flyable();

    virtual std::string land() = 0;
    virtual std::string fly() = 0;
    virtual std::string takeOff() = 0;

};


#endif //FLYABLE_FLYABLE_H
