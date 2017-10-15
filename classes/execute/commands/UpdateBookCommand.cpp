#include "UpdateBookCommand.h"
#include "../../../functions/functions.h"
#include "../../exceptions/BadBookIndexException.h"

UpdateBookCommand::UpdateBookCommand() {
    bookArgument = new BookCommandArgument;
    setArgument(bookArgument);
    pattern = "update book <" + bookArgument->name + ">";
    description = "ќбновить книгу";
    successMessage = " нига успешно обновлена";
}

void UpdateBookCommand::execute() {
    auto *book = bookArgument->getBook();
    if (!book) {
        throw BadBookIndexException();
    }
    cleanConsole();
    seedBook(book);
}
