#include "../structures/Book.h"
#include "functions.h"

Book *createAndSeedBook() {
    auto *book = new Book;
    seedBook(book);
    return book;
}
