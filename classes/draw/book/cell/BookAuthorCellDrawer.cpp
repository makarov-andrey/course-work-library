#include "BookAuthorCellDrawer.h"
#include "../../../../structures/Book.h"

BookAuthorCellDrawer::BookAuthorCellDrawer() {
    heading = "Автор";
}

std::string BookAuthorCellDrawer::getValue() {
    return row->author;
}
