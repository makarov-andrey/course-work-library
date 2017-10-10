#ifndef COURSE_WORK_TABLE_DRAWER_COLUMN_H
#define COURSE_WORK_TABLE_DRAWER_COLUMN_H

#include <string>
#include <vector>
#include <iostream>
#include "../../Drawable.h"
#include "../../../../functions/functions.h"

template<typename RowType> class CellDrawer : public Drawable {
public:
    std::string heading;
    int size;
    RowType *row;

    virtual std::string getValue() = 0;
    virtual void recountSize (std::vector<RowType *> *body) = 0;

    CellDrawer() {
        size = heading.size();
    }

    void renderHeading() {
        std::cout << formatAlignmentCenter(heading, size);
    }

    void render() {
        std::cout << formatAlignmentLeft(getValue(), size);
    }
};

#endif //COURSE_WORK_TABLE_DRAWER_COLUMN_H
