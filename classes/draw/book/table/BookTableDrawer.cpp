#include "BookTableDrawer.h"
#include "../cell/BookAuthorCellDrawer.h"
#include "../cell/BookTitleCellDrawer.h"

BookTableDrawer::BookTableDrawer() {
    authorCellDrawer = new BookAuthorCellDrawer;
    cellDrawers.push_back(*authorCellDrawer);

    titleCellDrawer = new BookTitleCellDrawer;
    cellDrawers.push_back(*titleCellDrawer);

    publisherCellDrawer = new BookPublisherCellDrawer;
    cellDrawers.push_back(*publisherCellDrawer);

    yearCellDrawer = new BookYearCellDrawer;
    cellDrawers.push_back(*yearCellDrawer);

    storePlaceCellDrawer = new BookStorePlaceCellDrawer;
    cellDrawers.push_back(*storePlaceCellDrawer);
}
