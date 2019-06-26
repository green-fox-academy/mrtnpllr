#include <iostream>

//This is a code which is intended to  be a note
//using namespace std; -> nagyon sok veszélye van! Amatőr...

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "size of double: " << sizeof(double) << std::endl;

    double f = 3.14159265653589793219;
    std::cout << "f: " << f << std::endl;

    std::string s = "alma";

    char c = 'A';

    //declare variable
    int asd;
    std::cout << "memory junk (empty int): " << asd << std::endl; //Amit itt kiír, az memóriaszemét

    //Declare and define
    int taa; //deklaráltam
    taa = 5; //definiáltam

    int bla = 6; //deklaráltam és definiáltam

    std::string s2;
    std::cout << "s2: " << std::endl;
    
    bool b = false;
    bool b2 = true;
    bool b3 = 567; //a bool integerrel van reprezentálva, ha a bool típus 0 = hamis, minden más esetben igaz.

    std::cout << "b3: " << b3 << std::endl;

    //std:: -> std namespace, ugyanazt a tipus nevet le lehessen irni tobbfelekeppen is

    return 0;
}

