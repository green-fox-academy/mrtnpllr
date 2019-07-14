#ifndef DAY_6_PERSON_H
#define DAY_6_PERSON_H

#include <string>
#include <iostream>


class Person
{
public:
    Person();

    Person(std::string name, int age, std::string gender);

    void introduce();

    void getGoal();

private:
    std::string _name;
    int _age;
    std::string _gender;
};


#endif //DAY_6_PERSON_H
