#include "BookStorePlaceCellDrawer.h"
#include "../../../../structures/Book.h"

BookStorePlaceCellDrawer::BookStorePlaceCellDrawer() {
    heading = "����� ��������";
}

std::string BookStorePlaceCellDrawer::getValue() {
    return row->storePlace;
}
