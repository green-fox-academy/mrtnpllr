#include <iostream>
#include <stdlib.h>
#include <time.h>

int fightFunction (int &hp1, int &hp2);

int main()
{
    int hp1;

    std::cout << "Enter the HP of your hero (between 100 - 500)!" << std::endl;
    std::cin >> hp1;

    int hp2 = hp1 - 1;

    if (hp1 >= 100 && hp1 <= 500) {

        fightFunction(hp1, hp2);

        if (hp1 > hp2) {
            std::cout << "You win!\nRemaining life: " << hp1 << std::endl;
        } else { std::cout << "You lose!\nEnemies remaining life" << hp2 << std::endl; }

    } else {
        std::cout << "Invalid hitpoint input" << std::endl;
    }
}

int fightFunction (int &hp1, int &hp2)
{
    srand (time(0));

    for (int i = 1; i < 10; ++i) {
        int damage = rand() % 100 + 1;
        int damage2 = rand() % 100 + 1;
        hp1 -= damage;
        hp2 -= damage2;
        if (hp1 <= 0 || hp2 <= 0) break;
    }
    return hp1, hp2;
}