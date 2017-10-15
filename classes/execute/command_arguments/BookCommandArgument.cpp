#include "BookCommandArgument.h"
#include "../../../globals.h"

BookCommandArgument::BookCommandArgument() {
    name = "book-index";
    description = "Индекс книги";
    regexString = "\\d+";
}

Book *BookCommandArgument::getBook() {
    if (value.empty()) {
        return nullptr;
    }
    int position = getBookPosition();
    if (position > (globalLibrary->books->size() - 1)) {
        return nullptr;
    }
    return globalLibrary->books->at(position);
}

int BookCommandArgument::getBookPosition() {
    return std::stoi(value) - 1;
}
