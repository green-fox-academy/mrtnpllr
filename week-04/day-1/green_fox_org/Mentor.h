#ifndef DAY_1_MENTOR_H
#define DAY_1_MENTOR_H

#include "Person.h"

enum class Level
{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person
{
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    Mentor();

    void getGoal() override;

    void introduce() override;

    static std::string levelToString(Level level);

protected:
    Level _level;
};


#endif //DAY_1_MENTOR_H
