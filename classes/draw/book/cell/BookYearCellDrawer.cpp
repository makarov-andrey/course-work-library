#include "BookYearCellDrawer.h"
#include "../../../models/Book.h"

BookYearCellDrawer::BookYearCellDrawer() {
    heading = "��� �������";
}

std::string BookYearCellDrawer::getValue() {
    return row->year;
}
