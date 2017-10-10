#include "BookIdCommandArgument.h"

BookIdCommandArgument::BookIdCommandArgument() {
    name = "book-id";
    description = "ID книги";
    regexString = "\\d+";
}
