#include <iostream>
#include "../structures/Library.h"
#include "functions.h"

void seedLibrary (Library *library) {
    seedFieldConsideringDefaultValue("�������� ����������", library->name);
    seedFieldConsideringDefaultValue("��� ��������� ����������", library->owner);
}
