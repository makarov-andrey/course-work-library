#include "FieldCommandArgument.h"

FieldCommandArgument::FieldCommandArgument() {
    name = "field";
    description = "�������� ���� ����� (author, title, publisher, year, storePlace)";
    regexString = "author|title|publisher|year|storePlace";
}
