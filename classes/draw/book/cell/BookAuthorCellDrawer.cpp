#include "BookAuthorCellDrawer.h"
#include "../../../models/Book.h"

BookAuthorCellDrawer::BookAuthorCellDrawer() {
    heading = "�����";
}

std::string BookAuthorCellDrawer::getValue() {
    return row->author;
}
