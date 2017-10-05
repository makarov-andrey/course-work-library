#include "BookYearCellDrawer.h"
#include "../../../../structures/Book.h"

BookYearCellDrawer::BookYearCellDrawer() {
    heading = "Год издания";
}

std::string BookYearCellDrawer::getValue() {
    return row->year;
}
