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
    ~BookTableDrawer();
};

#endif //COURSE_WORK_BOOKTABLEDRAWER_H
