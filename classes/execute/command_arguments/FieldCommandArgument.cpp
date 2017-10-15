#include "FieldCommandArgument.h"

FieldCommandArgument::FieldCommandArgument() {
    name = "field";
    description = "Название поля книги (author, title, publisher, year, storePlace)";
    regexString = "author|title|publisher|year|storePlace";
}
