#include "BookPublisherCellDrawer.h"
#include "../../../../structures/Book.h"

BookPublisherCellDrawer::BookPublisherCellDrawer() {
    heading = "Издательство";
}

std::string BookPublisherCellDrawer::getValue() {
return row->publisher;
}
