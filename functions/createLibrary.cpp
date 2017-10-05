#include <iostream>
#include "../structures/Library.h"

Library *createLibrary() {
    Library *library = new Library;
    std::cout << "¬ведите название библиотеки ";
    std::getline(std::cin, library->name);
    std::cout << "¬ведите им€ владельца библиотеки ";
    std::getline(std::cin, library->owner);
    return library;
}
