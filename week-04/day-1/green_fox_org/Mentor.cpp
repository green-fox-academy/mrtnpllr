#include "Mentor.h"
#include <iostream>

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << "year old" << Person::genderToString(_gender)
              << Mentor::levelToString(_level) << " mentor." << std::endl;
}

std::string Mentor::levelToString(Level level)
{
    switch (level) {
        case Level::JUNIOR:
            return "Junior";
        case Level::INTERMEDIATE:
            return "Intermediate";
        case Level::SENIOR:
            return "Senior";
        default:
            return "Unknown";
    }
}

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name, age, gender), _level(level)
{}

Mentor::Mentor() : _level(Level::INTERMEDIATE)
{}
