#ifndef COURSE_WORK_TABLE_DRAWER_COLUMN_H
#define COURSE_WORK_TABLE_DRAWER_COLUMN_H

#include <string>
#include <vector>
#include "../../Drawable.h"

template<typename RowType> class CellDrawer : public Drawable {
public:
    CellDrawer();
    std::string heading;
    int size;
    RowType *row;
    void renderHeading();
    void render();
    virtual std::string getValue();
};

#endif //COURSE_WORK_TABLE_DRAWER_COLUMN_H
