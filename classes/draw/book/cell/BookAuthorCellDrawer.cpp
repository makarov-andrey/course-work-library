#include "BookAuthorCellDrawer.h"
#include "../../../models/Book.h"

BookAuthorCellDrawer::BookAuthorCellDrawer() {
    heading = "Автор";
}

std::string BookAuthorCellDrawer::getValue() {
    return row->author;
}
