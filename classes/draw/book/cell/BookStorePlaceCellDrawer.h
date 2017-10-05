#ifndef COURSE_WORK_BOOKSTOREPLACECELLDRAWER_H
#define COURSE_WORK_BOOKSTOREPLACECELLDRAWER_H


#include "../../base/cell/CellDrawer.h"
#include "BookCellDrawer.h"

class BookStorePlaceCellDrawer : public BookCellDrawer {
public:
    BookStorePlaceCellDrawer();
    std::string getValue();
};


#endif //COURSE_WORK_BOOKSTOREPLACECELLDRAWER_H
