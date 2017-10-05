#ifndef COURSE_WORK_BOOKAUTHORCELLDRAWER_H
#define COURSE_WORK_BOOKAUTHORCELLDRAWER_H


#include "../../base/cell/CellDrawer.h"
#include "BookCellDrawer.h"

class BookAuthorCellDrawer : public BookCellDrawer {
public:
    BookAuthorCellDrawer();
    std::string getValue();
};


#endif //COURSE_WORK_BOOKAUTHORCELLDRAWER_H
