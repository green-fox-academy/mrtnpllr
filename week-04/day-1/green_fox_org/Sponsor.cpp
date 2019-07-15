#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"
#include "Cohort.h"

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << "year old" << Person::genderToString(_gender)
              << "who represents " << _company << "and hired " << _hiredStudents << " students so far." << std::endl;
}

int Sponsor::hire()
{
    return _hiredStudents++;
}

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company)
        : Person(name, age, gender), _company(company), _hiredStudents(0)
{}

Sponsor::Sponsor() : _company("Google"), _hiredStudents(0)
{}
