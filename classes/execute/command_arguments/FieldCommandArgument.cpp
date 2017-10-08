#include "FieldCommandArgument.h"

FieldCommandArgument::FieldCommandArgument() {
    name = "field";
    description = "Навзание поля книги (author, title, publisher, year, storePlace)";
    regexString = "author|title|publisher|year|storePlace";
}
