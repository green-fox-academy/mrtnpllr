#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";

    todoText.replace(0, 0, "My todo:\n");
    todoText.append(" - Download games");
    todoText.append("\n     - Diablo\n");

    std::cout << todoText << std::endl;

    return 0;
}