#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"
#include "Cohort.h"

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce()
{
    Person::introduce();
    std::cout << "from "
              << _previousOrganization << " who skipped " << _skippedDays << "days from the course already."
              << std::endl;
}

int Student::skipDays(int numberOfDays)
{
    return _skippedDays + numberOfDays;
}

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization) : Person(
        name, age, gender), _previousOrganization(previousOrganization), _skippedDays(0)
{}

Student::Student() : _previousOrganization(
        "The School of life"), _skippedDays(0)
{}
