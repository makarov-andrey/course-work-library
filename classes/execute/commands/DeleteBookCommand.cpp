#include "DeleteBookCommand.h"
#include "../../../structures/Book.h"
#include "../../../globals.h"

DeleteBookCommand::DeleteBookCommand() {
    bookArgument = new BookCommandArgument;
    setArgument(bookArgument);
    pattern = "delete book <" + bookArgument->name + ">";
    description = "������� �����";
}

void DeleteBookCommand::execute() {
    auto *book = bookArgument->getBook();
    if (!book) {
        //TODO error message
        return;
    }
    library->books->erase(library->books->begin() + bookArgument->getBookPosition());
    delete book;
}
