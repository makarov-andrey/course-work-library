#ifndef COURSE_WORK_TABLE_DRAWER_COLUMN_H
#define COURSE_WORK_TABLE_DRAWER_COLUMN_H

#include <string>
#include <vector>
#include <iostream>
#include "../../Drawable.h"
#include "../../../../functions/functions.h"

template<typename RowType> class CellDrawer : public Drawable {
public:
    CellDrawer();
    std::string heading;
    int size;
    RowType *row;
    void renderHeading();
    void render();
    virtual std::string getValue() = 0;
};

template<typename RowType>
inline
CellDrawer<RowType>::CellDrawer() {
    size = heading.size();
}

template<typename RowType>
inline
void CellDrawer<RowType>::renderHeading() {
    std::cout << formatAlignmentCenter(heading, size);
}

template<typename RowType>
inline
void CellDrawer<RowType>::render() {
    std::cout << formatAlignmentLeft(getValue(), size);
}

#endif //COURSE_WORK_TABLE_DRAWER_COLUMN_H
