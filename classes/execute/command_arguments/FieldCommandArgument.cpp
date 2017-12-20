#include "FieldCommandArgument.h"
#include "../../exceptions/BadBookFieldException.h"

FieldCommandArgument::FieldCommandArgument() {
    name = "field";
    description = "Название поля книги (author, title, publisher, year, storePlace)";
    regexString = "author|title|publisher|year|storePlace";
}

Book::field FieldCommandArgument::toBookEnumField() {
    if (value == "author") {
        return Book::AUTHOR;
    } else if (value == "title") {
        return Book::TITLE;
    } else if (value == "publisher") {
        return Book::PUBLISHER;
    } else if (value == "year") {
        return Book::YEAR;
    } else if (value == "storePlace") {
        return Book::STORE_PLACE;
    }
    throw BadBookFieldException();
}
