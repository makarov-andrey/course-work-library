#include "BookTitleCellDrawer.h"
#include "../../../models/Book.h"

BookTitleCellDrawer::BookTitleCellDrawer() {
    heading = "Название";
}

std::string BookTitleCellDrawer::getValue() {
    return row->title;
}
