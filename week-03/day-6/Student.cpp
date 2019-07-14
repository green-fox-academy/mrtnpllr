#include "Student.h"
#include <iostream>

Student::Student()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = "Female";
    _previousOrganisation = "The school of lie";
    _skippedDays = 0;
}

Student::Student(std::string name, int age, std::string gender, std::string previousOrganization)
{
    _skippedDays = 0;
}

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce()
{

    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << " from " << _previousOrganisation
              << "who skipped " << _skippedDays << " days from the course already." << std::endl;
}

int Student::skipDays(int numberOfDays)
{
    return _skippedDays + numberOfDays;
}


