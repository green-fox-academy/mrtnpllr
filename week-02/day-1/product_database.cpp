#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

void productScanner (std::map<std::string, int> listScanner);

int main(int argc, char* args[])
{
    /*We are going to represent our products in a map where the keys are strings representing the product's name
    and the values are numbers representing the product's price.

    Create a map with the following key-value pairs.

    Product name (key)	Price (value)
    Eggs	200
    Milk	200
    Fish	400
    Apples	150
    Bread	50
    Chicken	550
    Create an application which solves the following problems.

    How much is the fish?++
    What is the most expensive product?++
    What is the average price?++
    How many products' price is below 300?++
    Is there anything we can buy for exactly 125?
    What is the cheapest product?*/
    std::map<std::string, int> productList = {
            {"Eggs", 200},
            {"Milk", 200},
            {"Fish", 400},
            {"Apples", 150},
            {"Bread", 50},
            {"Chicken", 550}
    };

    productScanner(productList);

    return 0;
}

void productScanner (std::map<std::string, int> listScanner)
{
    int sum = 0;
    int average;
    int mostExpensive;
    std::vector<int> prices;
    std::vector<int> itemsBelow300;

    std::map<std::string, int>::iterator it;
    it = listScanner.begin();

    for(; it != listScanner.end(); it++) {
        sum = sum + it->second;
    }

    it = listScanner.begin();
    for (; it != listScanner.end(); it++) {
        if (it->first == "Fish") {
            std::cout << "The fish' price is: " << it->second << std::endl;
        }
    }

    it = listScanner.begin();
    for (; it != listScanner.end(); it++) {
        prices.push_back(listScanner.at(it->first));
    }

    mostExpensive = *max_element(prices.begin(), prices.end());

    it = listScanner.begin();
    for (; it != listScanner.end(); it++) {
        if (it->second == mostExpensive) {
            std::cout << "The most expensive item is: " << it->first << std::endl;
        }
    }

    average = sum / listScanner.size();
    std::cout << "The average price is: " << average << std::endl;

    it = listScanner.begin();
    for (; it != listScanner.end(); it++) {
        if (it->second < 300) {
            itemsBelow300.push_back(listScanner.at(it->first));
        }
    }

    std::cout << "Items below 300: " << itemsBelow300.size() << std::endl;

}