#ifndef COURSE_WORK_INDEXCELLDRAWER_H
#define COURSE_WORK_INDEXCELLDRAWER_H

#include "CellDrawer.h"

template<typename RowType> class TableDrawer;

template<typename RowType>
class IndexCellDrawer : public CellDrawer<RowType> {
public:
    TableDrawer<RowType> *tableDrawer;

    IndexCellDrawer() {
        this->heading = "ID";
    }

    std::string getValue() {
        return std::to_string(tableDrawer->getIndexOfElement(this->row) + 1);
    }

    void recountSize (std::vector<RowType *> *body) {
        this->size = std::max(this->heading.size(), std::to_string(body->size()).size());
    }
};


#endif //COURSE_WORK_INDEXCELLDRAWER_H
