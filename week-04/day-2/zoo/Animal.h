#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <string>

enum class Gender {
    MALE,
    FEMALE
};

class Animal
{
public:
    Animal(const std::string name);

    Animal();

    virtual std::string breed() = 0;
    virtual std::string getName() = 0;

protected:
    std::string _name;
    std::string color;
    Gender _gender;
    int _age;

};


#endif //ZOO_ANIMAL_H
