#include <iostream>
#include "../structures/Library.h"

Library *askAndCreateLibrary() {
    Library *library = new Library;
    std::cout << "������� �������� ���������� ";
    std::getline(std::cin, library->name);
    std::cout << "������� ��� ��������� ���������� ";
    std::getline(std::cin, library->owner);
    return library;
}
