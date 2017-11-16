#include "CreateBookCommand.h"
#include "../../../functions/functions.h"
#include "../../../globals.h"
#include "../../CommandLineInterface.h"

CreateBookCommand::CreateBookCommand() {
    pattern = "create book";
    description = "�������� �����";
    successMessage = "����� ������� ���������";
}

void CreateBookCommand::execute() {
    CommandLineInterface::cleanConsole();
    globalLibrary->books->push_back(createAndSeedBook());
}
