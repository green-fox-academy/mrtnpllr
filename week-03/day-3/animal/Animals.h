#ifndef ANIMAL_ANIMALS_H
#define ANIMAL_ANIMALS_H


class Animals
{
public:
    Animals();

    int getHunger() const;

    void setHunger(int hunger);

    int getThirst() const;

    void setThirst(int thirst);

    int eat();

    int drink();

    int play();

private:
    int _hunger;
    int _thirst;
};


#endif //ANIMAL_ANIMALS_H
