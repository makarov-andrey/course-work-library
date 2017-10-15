#include "DeleteBookCommand.h"
#include "../../models/Book.h"
#include "../../../globals.h"
#include "../../exceptions/BadBookIndexException.h"

DeleteBookCommand::DeleteBookCommand() {
    bookArgument = new BookCommandArgument;
    setArgument(bookArgument);
    pattern = "delete book <" + bookArgument->name + ">";
    description = "”далить книгу";
    successMessage = " нига успешно удалена";
}

void DeleteBookCommand::execute() {
    auto *book = bookArgument->getBook();
    if (!book) {
        throw BadBookIndexException();
    }
    globalLibrary->books->erase(globalLibrary->books->begin() + bookArgument->getBookPosition());
    delete book;
}
