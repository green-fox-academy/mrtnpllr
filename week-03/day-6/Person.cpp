#include "Person.h"

Person::Person(std::string name, int age, std::string gender)
{

    _name = name;
    _age = age;
    _gender = gender;
}

Person::Person()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = "Female";
}

void Person::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << "." << std::endl;
}

void Person::getGoal()
{
    std::cout << "My goal is: live for the moment!" << std::endl;
}
