#include "BookTitleCellDrawer.h"
#include "../../../../structures/Book.h"

BookTitleCellDrawer::BookTitleCellDrawer() {
    heading = "��������";
}

std::string BookTitleCellDrawer::getValue() {
    return row->title;
}
