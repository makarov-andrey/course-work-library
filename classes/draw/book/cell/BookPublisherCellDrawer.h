#ifndef COURSE_WORK_BOOKPUBLISHERCELLDRAWER_H
#define COURSE_WORK_BOOKPUBLISHERCELLDRAWER_H


#include "../../base/cell/CellDrawer.h"
#include "BookCellDrawer.h"

class BookPublisherCellDrawer : public BookCellDrawer {
public:
    BookPublisherCellDrawer();
    std::string getValue();
};


#endif //COURSE_WORK_BOOKPUBLISHERCELLDRAWER_H
