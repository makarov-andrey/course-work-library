#include "BookStorePlaceCellDrawer.h"
#include "../../../models/Book.h"

BookStorePlaceCellDrawer::BookStorePlaceCellDrawer() {
    heading = "Место хранения";
}

std::string BookStorePlaceCellDrawer::getValue() {
    return row->storePlace;
}
