#include <string>
#include <iostream>
#include "functions.h"

std::string askCommand () {
    setColor(COLOR_LIGHT_MAGENTA);
    std::cout << "������� �������: ";
    setColor();
    std::string command;
    std::getline(std::cin, command);
    return command;
}
