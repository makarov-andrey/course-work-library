#include "BookPublisherCellDrawer.h"
#include "../../../../structures/Book.h"

BookPublisherCellDrawer::BookPublisherCellDrawer() {
    heading = "������������";
}

std::string BookPublisherCellDrawer::getValue() {
return row->publisher;
}
