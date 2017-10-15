#include <iostream>
#include "../classes/models/Book.h"
#include "functions.h"

void seedBook (Book *book) {
    seedFieldConsideringDefaultValue("�����", book->author);
    seedFieldConsideringDefaultValue("��������", book->title);
    seedFieldConsideringDefaultValue("������������", book->publisher);
    seedFieldConsideringDefaultValue("��� �������", book->year);
    seedFieldConsideringDefaultValue("����� ��������", book->storePlace);
}
