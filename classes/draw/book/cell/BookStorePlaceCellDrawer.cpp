#include "BookStorePlaceCellDrawer.h"
#include "../../../../structures/Book.h"

BookStorePlaceCellDrawer::BookStorePlaceCellDrawer() {
    heading = "Место хранения";
}

std::string BookStorePlaceCellDrawer::getValue() {
    return row->storePlace;
}
