#include "BookAuthorCellDrawer.h"
#include "../../../../structures/Book.h"

BookAuthorCellDrawer::BookAuthorCellDrawer() {
    heading = "�����";
}

std::string BookAuthorCellDrawer::getValue() {
    return row->author;
}
