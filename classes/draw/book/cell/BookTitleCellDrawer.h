#ifndef COURSE_WORK_BOOKTITLECELLDRAWER_H
#define COURSE_WORK_BOOKTITLECELLDRAWER_H


#include "../../base/cell/CellDrawer.h"
#include "BookCellDrawer.h"

class BookTitleCellDrawer : public BookCellDrawer {
public:
    BookTitleCellDrawer();
    std::string getValue();
};


#endif //COURSE_WORK_BOOKTITLECELLDRAWER_H
