#include <iostream>
#include <map>

int main(int argc, char *args[])
{
    //Create a map where the keys are strings and the values are strings with the following initial values | Key | Value | | :---------------- | :---------------------- | | 978-1-60309-452-8 | A Letter to Jo | | 978-1-60309-459-7 | Lupus | | 978-1-60309-444-3 | Red Panda and Moon Bear | | 978-1-60309-461-0 | The Lab |
    std::map<std::string, std::string> bookRepo = {
            {"978-1-60309-452-8", "A Letter to Jo"},
            {"978-1-60309-459-7", "Lupus"},
            {"978-1-60309-444-3", "Red Panda and Moon Bear"},
            {"978-1-60309-461-0", "The lab"}
    };

    /*Print all the key-value pairs in the following format
    A Letter to Jo (ISBN: 978-1-60309-452-8)
    Lupus (ISBN: 978-1-60309-459-7)
    Red Panda and Moon Bear (ISBN: 978-1-60309-444-3)
    The Lab (ISBN: 978-1-60309-461-0)*/
    std::map<std::string, std::string>::iterator it;

    for (it = bookRepo.begin(); it != bookRepo.end(); it++) {
        std::cout << it->second << " (ISBN: ";
        std::cout << it->first << ")" << std::endl;
    }

    //Remove the key-value pair with key 978-1-60309-444-3
    bookRepo.erase("978-1-60309-444-3");

    //Remove the key-value pair with value The Lab
    it = bookRepo.begin();

    for (; it != bookRepo.end(); it++) {
        if (it->second == "The lab") {
            bookRepo.erase(it);
        }
    }

    //Add the following key-value pairs to the map | Key | Value | | :---------------- | :-------------------- | | 978-1-60309-450-4 | They Called Us Enemy | | 978-1-60309-453-5 | Why Did We Trust Him? |
    bookRepo.insert(std::make_pair("978-1-60309-450-4", "They Called Us Enemy"));
    bookRepo.insert(std::make_pair("978-1-60309-453-5", "Why Did We Trust Him?"));

    //Print whether there is an associated value with key 478-0-61159-424-8 or not
    it = bookRepo.begin();
    for (; it != bookRepo.end(); it++) {
        if (it->first == "478-0-61159-424-8") {
            std::cout << "Key - 478-0-61159-424-8 has a value";
        }
    }

    //Print the value associated with key 978-1-60309-453-5
    it = bookRepo.begin();
    std::cout << std::endl;

    for (; it != bookRepo.end(); it++) {
        if (it->first == "978-1-60309-453-5") {
            std::cout << it->second;
        }
    }

    return 0;
}



