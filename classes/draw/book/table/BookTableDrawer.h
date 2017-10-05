#ifndef COURSE_WORK_BOOKTABLEDRAWER_H
#define COURSE_WORK_BOOKTABLEDRAWER_H

#include <vector>
#include "../../base/table/TableDrawer.h"
#include "../cell/BookCellDrawer.h"
#include "../cell/BookAuthorCellDrawer.h"
#include "../cell/BookTitleCellDrawer.h"
#include "../cell/BookPublisherCellDrawer.h"
#include "../cell/BookYearCellDrawer.h"
#include "../cell/BookStorePlaceCellDrawer.h"

class BookTableDrawer : public TableDrawer<Book> {
public:
    BookTableDrawer();
    std::vector<BookCellDrawer> cellDrawers;

    BookAuthorCellDrawer *authorCellDrawer;
    BookTitleCellDrawer *titleCellDrawer;
    BookPublisherCellDrawer *publisherCellDrawer;
    BookYearCellDrawer *yearCellDrawer;
    BookStorePlaceCellDrawer *storePlaceCellDrawer;
};

#endif //COURSE_WORK_BOOKTABLEDRAWER_H
