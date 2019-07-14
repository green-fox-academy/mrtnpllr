#ifndef DAY_6_STUDENT_H
#define DAY_6_STUDENT_H

#include <string>

class Student
{
public:
    Student();

    Student(std::string name, int age, std::string gender, std::string previousOrganization);

    void getGoal();

    void introduce();

    int skipDays(int numberOfDays);

private:
    std::string _name;
    int _age;
    int _skippedDays;
    std::string _gender;
    std::string _previousOrganisation;

};


#endif //DAY_6_STUDENT_H
