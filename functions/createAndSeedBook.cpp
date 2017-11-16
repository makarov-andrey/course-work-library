#include "../classes/models/Book.h"
#include "functions.h"
#include "../classes/CommandLineInterface.h"

Book *createAndSeedBook() {
    auto *book = new Book;
    CommandLineInterface::seedBook(book);
    return book;
}
