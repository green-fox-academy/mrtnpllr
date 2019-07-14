#include <iostream>
#include "Person.h"
#include "Student.h"

int main()
{

    Person newPerson("Mark", 34, "Male");
    newPerson.introduce();
    Student newStudent("John", 23, "Male", nullptr);
    newStudent.skipDays(3);

    return 0;
}