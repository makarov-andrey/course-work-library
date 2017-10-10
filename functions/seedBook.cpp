#include <iostream>
#include "../structures/Book.h"

void seedBook (Book *book) {
    std::cout << "Автор: ";
    std::getline(std::cin, book->author);
    std::cout << "Название: ";
    std::getline(std::cin, book->title);
    std::cout << "Издательство: ";
    std::getline(std::cin, book->publisher);
    std::cout << "Год издания: ";
    std::getline(std::cin, book->year);
    std::cout << "Место хранения: ";
    std::getline(std::cin, book->storePlace);
}
