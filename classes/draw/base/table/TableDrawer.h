#ifndef COURSE_WORK_TABLE_DRAWER_H
#define COURSE_WORK_TABLE_DRAWER_H

#include <vector>
#include "../cell/CellDrawer.h"
#include "../../../../structures/Book.h"
#include "../../Drawable.h"

template<typename RowType>
class TableDrawer : public Drawable {
public:
    typedef CellDrawer<RowType> TypedCellDrawer;
    typedef typename std::vector<TypedCellDrawer>::iterator TypedCellDrawerIterator;
    typedef typename std::vector<RowType>::iterator RowTypeIterator;

    int headingColor;
    int borderColor;
    int cellColor;
    std::vector<TypedCellDrawer> cellDrawers;
    std::vector<RowType> body;

    TableDrawer();
    void recountCellSizes();
    void render();

protected:
    void renderHeading();
    void renderRow(RowType *row);
    void renderHorizontalBorderLine();
    void renderVerticalBorderSymbol();
    int getTableWidth();
};

#endif //COURSE_WORK_TABLE_DRAWER_H
