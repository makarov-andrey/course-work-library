#include "DeleteBookCommand.h"
#include "../../../structures/Book.h"
#include "../../../globals.h"

DeleteBookCommand::DeleteBookCommand() {
    bookIdArgument = new BookIdCommandArgument;
    setArgument(bookIdArgument);
    pattern = "delete book <" + bookIdArgument->name + ">";
    description = "Удалить книгу";
}

void DeleteBookCommand::execute() {
    int position = std::stoi(bookIdArgument->value) - 1;
    if (position > (library->books->size() - 1)) {
        //TODO error message
        return;
    }
    auto *book = library->books->at(position);
    library->books->erase(library->books->begin() + position);
    delete book;
}
