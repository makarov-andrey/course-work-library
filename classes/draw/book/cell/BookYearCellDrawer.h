#ifndef COURSE_WORK_BOOKYEARCELLDRAWER_H
#define COURSE_WORK_BOOKYEARCELLDRAWER_H


#include "../../base/cell/CellDrawer.h"
#include "BookCellDrawer.h"

class BookYearCellDrawer : public BookCellDrawer {
public:
    BookYearCellDrawer();
    std::string getValue();
};


#endif //COURSE_WORK_BOOKYEARCELLDRAWER_H
