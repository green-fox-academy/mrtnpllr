#include <iostream>
#include <vector>
//RPG buying function simulation

int main (int argc, char* args[])
{
    std::vector <std::string> charInventory = {};
    int gold = 700;
    int buy;
    char exitChar = 'Y';

    while (exitChar != 'N') {
        std::cout << "What would you like to buy, traveller? \n Dagger - 30 gold (1) Sword - 100 gold (2) Axe - 150 gold (3) Staff - 250 gold (4) Magic wand - 400gold (5)" << std::endl;
        std::cin >> buy;

        if (buy == 1 && gold >= 30) {
            charInventory.push_back("Dagger");
            gold -= 30;
            std::cout << "Remaining gold: " << gold << std::endl;
            std::cout << "You have '";
            for (const auto & i : charInventory)
                std::cout << i << " ";
            std::cout << "' in your inventory so far" "\n";
            std::cout << "Do you want to buy some more weapons? (Y/N)" << std::endl;
            std::cin >> exitChar;
        }else if (buy == 2 && gold >= 100) {
            charInventory.push_back("Sword");
            gold -= 100;
            std::cout << "Remaining gold: " << gold << std::endl;
            std::cout << "You have '";
            for (const auto & i : charInventory)
                std::cout << i << " ";
            std::cout << "' in your inventory so far" "\n";
            std::cout << "Do you want to buy some more weapons? (Y/N)" << std::endl;
            std::cin >> exitChar;
        }else if (buy == 3 && gold >= 150) {
            charInventory.push_back("Axe");
            gold -= 150;
            std::cout << "Remaining gold: " << gold << std::endl;
            std::cout << "You have '";
            for (const auto & i : charInventory)
                std::cout << i << " ";
            std::cout << "' in your inventory so far" "\n";
            std::cout << "Do you want to buy some more weapons? (Y/N)" << std::endl;
            std::cin >> exitChar;
        }else if (buy == 4 && gold >= 250) {
            charInventory.push_back("Staff");
            gold -= 250;
            std::cout << "Remaining gold: " << gold << std::endl;
            std::cout << "You have '";
            for (const auto & i : charInventory)
                std::cout << i << " ";
            std::cout << "' in your inventory so far" "\n";
            std::cout << "Do you want to buy some more weapons? (Y/N)" << std::endl;
            std::cin >> exitChar;
        }else if (buy == 5 && gold >= 400) {
            charInventory.push_back("Magic Wand");
            gold -= 400;
            std::cout << "Remaining gold: " << gold << std::endl;
            std::cout << "You have '";
            for (const auto & i : charInventory)
                std::cout << i << " ";
            std::cout << "' in your inventory so far" "\n";
            std::cout << "Do you want to buy some more weapons? (Y/N)" << std::endl;
            std::cin >> exitChar;
        }else {
            std::cout << "I'm afraid you don't have enough gold for that, traveller" << std::endl;
            std::cout << "Remaining gold: " << gold << std::endl;
            std::cout << "Do you want to buy some more weapons? (Y/N)" << std::endl;
            std::cin >> exitChar;
        }
    }

    return 0;
}