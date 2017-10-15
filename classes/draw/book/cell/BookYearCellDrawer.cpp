#include "BookYearCellDrawer.h"
#include "../../../models/Book.h"

BookYearCellDrawer::BookYearCellDrawer() {
    heading = "Год издания";
}

std::string BookYearCellDrawer::getValue() {
    return row->year;
}
