#ifndef COURSE_WORK_ITERATECOUNTEDCELLDRAWER_H
#define COURSE_WORK_ITERATECOUNTEDCELLDRAWER_H


#include "CellDrawer.h"

template<typename RowType>
class IterateSizeCountedCellDrawer : public CellDrawer<RowType> {
public:
    void recountSize (std::vector<RowType *> *body) {
        this->size = this->heading.size();
        for (auto &row: *body) {
            this->row = row;
            this->size = std::max(this->size, (int) this->getValue().size());
        }
    }
};


#endif //COURSE_WORK_ITERATECOUNTEDCELLDRAWER_H
