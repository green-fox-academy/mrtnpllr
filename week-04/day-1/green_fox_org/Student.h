#ifndef DAY_1_STUDENT_H
#define DAY_1_STUDENT_H

#include "Person.h"

class Student : public Person
{
public:
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    Student();

    void getGoal() override;

    void introduce() override;

    int skipDays(int numberOfDays);

protected:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //DAY_1_STUDENT_H
