#include "BookStorePlaceCellDrawer.h"
#include "../../../models/Book.h"

BookStorePlaceCellDrawer::BookStorePlaceCellDrawer() {
    heading = "����� ��������";
}

std::string BookStorePlaceCellDrawer::getValue() {
    return row->storePlace;
}
