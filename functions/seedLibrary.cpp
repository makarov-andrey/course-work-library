#include <iostream>
#include "../structures/Library.h"

void seedLibrary (Library *library) {
    std::cout << "������� �������� ���������� ";
    std::getline(std::cin, library->name);
    std::cout << "������� ��� ��������� ���������� ";
    std::getline(std::cin, library->owner);
}
