#include "UpdateBookCommand.h"
#include "../../../structures/Book.h"
#include "../../../globals.h"
#include "../../../functions/functions.h"

UpdateBookCommand::UpdateBookCommand() {
    bookIdArgument = new BookIdCommandArgument;
    setArgument(bookIdArgument);
    pattern = "update book <" + bookIdArgument->name + ">";
    description = "�������� �����";
}

void UpdateBookCommand::execute() {
    int position = std::stoi(bookIdArgument->value) - 1;
    if (position > (library->books->size() - 1)) {
        //TODO error message
        return;
    }
    auto *book = library->books->at(position);
    seedBook(book);
}
