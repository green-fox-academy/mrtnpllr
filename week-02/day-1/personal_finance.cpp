#include <iostream>
#include <vector>
#include <algorithm>

int spendingCalc(std::vector<int> vect);

int main(int argc, char* args[])
{
    /*We are going to represent our expenses in a list containing integers.

    Create an application which solves the following problems.
    How much did we spend?
    Which was our greatest expense?
    Which was our cheapest spending?
    What was the average amount of our spendings?*/

    //Create a list with the following items.
    //500, 1000, 1250, 175, 800 and 120
    std::vector<int> spending = {500, 1000, 1250, 175, 800, 120};

    std::cout << spendingCalc(spending);



    return 0;
}

int spendingCalc(std::vector<int> vect)
{
    int sum = 0;
    int min;
    int max;

    for (unsigned int i = 0; i < vect.size() ; ++i) {
        sum = sum + vect[i];
    }

    min = *min_element(vect.begin(),vect.end());

    max = *max_element(vect.begin(),vect.end());

    
    return sum;
}

