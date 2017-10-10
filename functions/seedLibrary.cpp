#include <iostream>
#include "../structures/Library.h"

void seedLibrary (Library *library) {
    std::cout << "¬ведите название библиотеки ";
    std::getline(std::cin, library->name);
    std::cout << "¬ведите им€ владельца библиотеки ";
    std::getline(std::cin, library->owner);
}
