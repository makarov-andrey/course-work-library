#include "BookTitleCellDrawer.h"
#include "../../../models/Book.h"

BookTitleCellDrawer::BookTitleCellDrawer() {
    heading = "��������";
}

std::string BookTitleCellDrawer::getValue() {
    return row->title;
}
