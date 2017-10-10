#include "CreateBookCommand.h"
#include "../../../functions/functions.h"
#include "../../../globals.h"

CreateBookCommand::CreateBookCommand() {
    pattern = "create book";
    description = "�������� �����";
}

void CreateBookCommand::execute() {
    cleanConsole();
    library->books->push_back(createAndSeedBook());
}
