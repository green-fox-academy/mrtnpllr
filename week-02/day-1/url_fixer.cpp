#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");

    url.insert(5, ":");
    url.replace(38, 41, "odds");

    std::cout << url << std::endl;
    
    return 0;
}