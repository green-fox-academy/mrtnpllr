#ifndef DAY_1_SPONSOR_H
#define DAY_1_SPONSOR_H

#include "Person.h"
#include <string>

class Sponsor : public Person
{
public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    Sponsor();

    void getGoal() override;

    void introduce() override;

    int hire();

protected:
    std::string _company;
    int _hiredStudents;
};

#endif //DAY_1_SPONSOR_H
