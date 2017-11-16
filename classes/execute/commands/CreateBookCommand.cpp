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
    auto *book = new Book;
    CommandLineInterface::seedBook(book);
    globalLibrary->books->push_back(book);
}
