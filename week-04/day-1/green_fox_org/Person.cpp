#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"
#include "Cohort.h"

Person::Person() : _name("Jane Doe"), _age(30), _gender(Gender::FEMALE)
{}

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender)
{}

std::string Person::genderToString(Gender gender)
{
    switch (gender) {
        case Gender::MALE:
            return "Male";
        case Gender::FEMALE:
            return "Female";
        default:
            return "Unknown";
    }
}

void Person::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << Person::genderToString(_gender) << "."
              << std::endl;
}


void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}
