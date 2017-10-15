#include "CreateBookCommand.h"
#include "../../../functions/functions.h"
#include "../../../globals.h"

CreateBookCommand::CreateBookCommand() {
    pattern = "create book";
    description = "Добавить книгу";
    successMessage = "Книга успешно добавлена";
}

void CreateBookCommand::execute() {
    cleanConsole();
    globalLibrary->books->push_back(createAndSeedBook());
}
