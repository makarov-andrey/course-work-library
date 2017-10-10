#include <iostream>
#include "../structures/Library.h"
#include "functions.h"

void seedLibrary (Library *library) {
    seedFieldConsideringDefaultValue("Название библиотеки", library->name);
    seedFieldConsideringDefaultValue("Имя владельца библиотеки", library->owner);
}
