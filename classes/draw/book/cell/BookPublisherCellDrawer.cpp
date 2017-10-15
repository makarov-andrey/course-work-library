#include "BookPublisherCellDrawer.h"
#include "../../../models/Book.h"

BookPublisherCellDrawer::BookPublisherCellDrawer() {
    heading = "Издательство";
}

std::string BookPublisherCellDrawer::getValue() {
return row->publisher;
}
