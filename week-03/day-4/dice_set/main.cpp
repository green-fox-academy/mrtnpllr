#include <iostream>

#include "DiceSet.h"
#include <time.h>
#include <chrono>

int main(int argc, char *args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;

    //Solution One
    int counterNoSix;
    do {
        diceSet.roll();
        counterNoSix = 0;
        for (int i = 0; i < diceSet.getCurrent().size(); ++i) {
            if (diceSet.getCurrent(i) != 6)
                counterNoSix++;
        }
    } while (counterNoSix != 0);

    //Solution Two
    bool allSix;
    do {
        diceSet.roll();
        allSix = true;
        for (int i = 0; i < diceSet.getCurrent().size(); ++i) {
            if (diceSet.getCurrent(i) != 6) {
                allSix = false;
                break;
            }
        }
    } while (!allSix);

    //Solution Three
    bool allSix2;
    while (!allSix2) {
        diceSet.roll();
        allSix2 = true;
        for (int i = 0; i < diceSet.getCurrent().size(); ++i) {
            if (diceSet.getCurrent(i) != 6) {
                allSix2 = false;
                break;
            }
        }
    }

    for (int j = 0; j < 6; ++j) {
        std::cout << diceSet.getCurrent(j) << std::endl;
    }

    return 0;
}