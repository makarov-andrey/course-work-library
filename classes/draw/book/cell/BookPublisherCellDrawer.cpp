#include "BookPublisherCellDrawer.h"
#include "../../../models/Book.h"

BookPublisherCellDrawer::BookPublisherCellDrawer() {
    heading = "������������";
}

std::string BookPublisherCellDrawer::getValue() {
return row->publisher;
}
