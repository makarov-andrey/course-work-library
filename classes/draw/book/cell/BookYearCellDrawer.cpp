#include "BookYearCellDrawer.h"
#include "../../../../structures/Book.h"

BookYearCellDrawer::BookYearCellDrawer() {
    heading = "��� �������";
}

std::string BookYearCellDrawer::getValue() {
    return row->year;
}
