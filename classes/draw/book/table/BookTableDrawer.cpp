#include "BookTableDrawer.h"

BookTableDrawer::BookTableDrawer() {
    cellDrawers->push_back(new BookAuthorCellDrawer);
    cellDrawers->push_back(new BookTitleCellDrawer);
    cellDrawers->push_back(new BookPublisherCellDrawer);
    cellDrawers->push_back(new BookYearCellDrawer);
    cellDrawers->push_back(new BookStorePlaceCellDrawer);
}

BookTableDrawer::~BookTableDrawer() {
    for (auto &cellDrawer: *cellDrawers) {
        delete cellDrawer;
    }
}
