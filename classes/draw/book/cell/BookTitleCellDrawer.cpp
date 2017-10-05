#include "BookTitleCellDrawer.h"
#include "../../../../structures/Book.h"

BookTitleCellDrawer::BookTitleCellDrawer() {
    heading = "Название";
}

std::string BookTitleCellDrawer::getValue() {
    return row->title;
}
