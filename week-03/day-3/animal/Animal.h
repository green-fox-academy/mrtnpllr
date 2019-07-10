#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class Animal
{
public:
    Animal();

    int getHunger();

    int getThirst();

    int eat();

    int drink();

    int play();

private:
    int _hunger;
    int _thirst;
};


#endif //ANIMAL_ANIMAL_H
