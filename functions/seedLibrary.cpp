#include <iostream>
#include "../classes/models/Library.h"
#include "functions.h"

void seedLibrary (Library *library) {
    seedFieldConsideringDefaultValue("Название библиотеки", library->name);
    seedFieldConsideringDefaultValue("Владелец библиотеки", library->owner);
}
