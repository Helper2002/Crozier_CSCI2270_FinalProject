#include <iostream>
#include <string>

//this function returns a string input even if the input has a space in it

std::string input()
{
    std::string name;
    std::cin.ignore();
    getline(std::cin, name);
    return name;
}
