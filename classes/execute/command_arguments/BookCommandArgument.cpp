#include "BookCommandArgument.h"
#include "../../../globals.h"

BookCommandArgument::BookCommandArgument() {
    name = "book-id";
    description = "ID книги";
    regexString = "\\d+";
}

Book *BookCommandArgument::getBook() {
    if (value.empty()) {
        return nullptr;
    }
    int position = getBookPosition();
    if (position > (library->books->size() - 1)) {
        return nullptr;
    }
    return library->books->at(position);
}

int BookCommandArgument::getBookPosition() {
    return std::stoi(value) - 1;
}
