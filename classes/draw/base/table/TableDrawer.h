#ifndef COURSE_WORK_TABLE_DRAWER_H
#define COURSE_WORK_TABLE_DRAWER_H

#include "../cell/CellDrawer.h"
#include "../../../../structures/Book.h"
#include "../../Drawable.h"
#include "../../../../headers/colors.h"
#include "../../../../functions/functions.h"

class iterator;

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
    void render(std::vector<RowType> rows);

protected:
    void renderHeading();
    void renderRow(RowType *row);
    void renderHorizontalBorderLine();
    void renderVerticalBorderSymbol();
    int getTableWidth();
};

template<typename RowType>
inline
TableDrawer<RowType>::TableDrawer() {
    headingColor = COLOR_GREEN;
    borderColor = COLOR_WHITE;
    cellColor = COLOR_WHITE;
}

template<typename RowType>
inline
void TableDrawer<RowType>::renderHorizontalBorderLine() {
    setColor(borderColor);
    std::cout << std::string(getTableWidth(), '-') << std::endl;
    setColor();
};

template<typename RowType>
inline
void TableDrawer<RowType>::renderVerticalBorderSymbol() {
    setColor(borderColor);
    std::cout << '|';
    setColor();
}

template<typename RowType>
inline
void TableDrawer<RowType>::renderHeading() {
    renderHorizontalBorderLine();
    renderVerticalBorderSymbol();
    for (TypedCellDrawerIterator cell = cellDrawers.begin() ; cell != cellDrawers.end(); ++cell) {
        setColor(headingColor);
        cell->renderHeading();
        setColor();
        renderVerticalBorderSymbol();
    }
    std::cout << std::endl;
    renderHorizontalBorderLine();
}

template<typename RowType>
inline
void TableDrawer<RowType>::renderRow(RowType *row) {
    renderVerticalBorderSymbol();
    for (TypedCellDrawerIterator cell = cellDrawers.begin() ; cell != cellDrawers.end(); ++cell) {
        setColor(cellColor);
        cell->row = row;
        cell->render();
        setColor();
        renderVerticalBorderSymbol();
    }
    std::cout << std::endl;
    renderHorizontalBorderLine();
}

template<typename RowType>
inline
int TableDrawer<RowType>::getTableWidth() {
    int size = 1;
    for (TypedCellDrawerIterator cell = cellDrawers.begin() ; cell != cellDrawers.end(); ++cell) {
        size += cell->size;
        size++;
    }
    return size;
};

template<typename RowType>
inline
void TableDrawer<RowType>::render() {
    renderHeading();
    for (RowTypeIterator row = body.begin(); row != body.end(); ++row) {
        renderRow(row.base());
    }
}

template<typename RowType>
inline
void TableDrawer<RowType>::render(std::vector<RowType> rows) {
    body = rows;
    recountCellSizes();
    render();
}

template<typename RowType>
inline
void TableDrawer<RowType>::recountCellSizes() {
    for (TypedCellDrawerIterator cell = cellDrawers.begin() ; cell != cellDrawers.end(); ++cell) {
        cell->size = cell->heading.size();
    }
    for (RowTypeIterator row = body.begin() ; row != body.end(); ++row) {
        for (TypedCellDrawerIterator cell = cellDrawers.begin() ; cell != cellDrawers.end(); ++cell) {
            cell->row = row.base();
            cell->size = std::max(cell->size, (int) cell->getValue().size());
        }
    }
}

#endif //COURSE_WORK_TABLE_DRAWER_H
