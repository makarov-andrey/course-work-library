#include <iostream>
#include "../structures/Book.h"

void seedBook (Book *book) {
    std::cout << "�����: ";
    std::getline(std::cin, book->author);
    std::cout << "��������: ";
    std::getline(std::cin, book->title);
    std::cout << "������������: ";
    std::getline(std::cin, book->publisher);
    std::cout << "��� �������: ";
    std::getline(std::cin, book->year);
    std::cout << "����� ��������: ";
    std::getline(std::cin, book->storePlace);
}
