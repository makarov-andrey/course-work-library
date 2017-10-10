#include "UpdateBookCommand.h"
#include "../../../structures/Book.h"
#include "../../../globals.h"
#include "../../../functions/functions.h"

UpdateBookCommand::UpdateBookCommand() {
    bookArgument = new BookCommandArgument;
    setArgument(bookArgument);
    pattern = "update book <" + bookArgument->name + ">";
    description = "Обновить книгу";
}

void UpdateBookCommand::execute() {
    auto *book = bookArgument->getBook();
    if (!book) {
        //TODO error message
        return;
    }
    cleanConsole();
    seedBook(book);
}
