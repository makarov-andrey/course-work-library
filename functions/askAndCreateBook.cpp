#include <iostream>
#include "../structures/Book.h"

Book *askAndCreateBook() {
    auto *book = new Book;
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
    return book;
}
