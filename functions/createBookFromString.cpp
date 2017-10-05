#include <sstream>
#include "../structures/Book.h"

const char FIELD_SEPARATOR_SYMBOL = ';';

Book *createBookFromString (std::string line) {
    std::stringstream lineStream(line);
    std::string field;
    Book *book = new Book;
    std::getline(lineStream, book->author, FIELD_SEPARATOR_SYMBOL);
    std::getline(lineStream, book->title, FIELD_SEPARATOR_SYMBOL);
    std::getline(lineStream, book->publisher, FIELD_SEPARATOR_SYMBOL);
    std::getline(lineStream, book->year, FIELD_SEPARATOR_SYMBOL);
    std::getline(lineStream, book->storePlace, FIELD_SEPARATOR_SYMBOL);
    return book;
}
