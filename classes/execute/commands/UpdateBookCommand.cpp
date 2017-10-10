#include "UpdateBookCommand.h"
#include "../../../structures/Book.h"
#include "../../../globals.h"
#include "../../../functions/functions.h"

UpdateBookCommand::UpdateBookCommand() {
    bookIdArgument = new BookIdCommandArgument;
    setArgument(bookIdArgument);
    pattern = "update book <" + bookIdArgument->name + ">";
    description = "Обновить книгу";
}

void UpdateBookCommand::execute() {
    Book *book = library->books->at(std::stoi(bookIdArgument->value) - 1);
    if (!book) {
        //TODO error message
    }
    cleanConsole();
    seedBook(book);
}
