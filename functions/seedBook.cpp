#include <iostream>
#include "../structures/Book.h"
#include "functions.h"

void seedBook (Book *book) {
    seedFieldConsideringDefaultValue("Автор", book->author);
    seedFieldConsideringDefaultValue("Название", book->title);
    seedFieldConsideringDefaultValue("Издательство", book->publisher);
    seedFieldConsideringDefaultValue("Год издания", book->year);
    seedFieldConsideringDefaultValue("Место хранения", book->storePlace);
}
