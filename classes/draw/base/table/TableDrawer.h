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

    int headingColor;
    int borderColor;
    int cellColor;

    TableDrawer();
    void recountCellSizes();
    void render();
    void setBody(std::vector<RowType*> *body);

protected:
    std::vector<TypedCellDrawer*> *cellDrawers;
    std::vector<RowType*> *body;
    void renderHeading();
    void renderRow(RowType *row);
    void renderHorizontalBorderLine();
    void renderVerticalBorderSymbol();
    int getTableWidth();
};

template<typename RowType>
inline
TableDrawer<RowType>::TableDrawer() {
    cellDrawers = new std::vector<TypedCellDrawer*>;
    headingColor = COLOR_LIGHT_GREEN;
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
    for (auto &cellDrawer: *cellDrawers) {
        setColor(headingColor);
        cellDrawer->renderHeading();
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
    for (auto &cellDrawer: *cellDrawers) {
        setColor(cellColor);
        cellDrawer->row = row;
        cellDrawer->render();
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
    for (auto &cellDrawer: *cellDrawers) {
        size += cellDrawer->size;
        size++;
    }
    return size;
};

template<typename RowType>
inline
void TableDrawer<RowType>::render() {
    renderHeading();
    for (auto &row: *body) {
        renderRow(row);
    }
}

template<typename RowType>
inline
void TableDrawer<RowType>::recountCellSizes() {
    for (auto &cellDrawer: *cellDrawers) {
        cellDrawer->size = cellDrawer->heading.size();
    }
    for (auto &row: *body) {
        for (auto &cellDrawer: *cellDrawers) {
            cellDrawer->row = row;
            cellDrawer->size = std::max(cellDrawer->size, (int) cellDrawer->getValue().size());
        }
    }
}

template<typename RowType>
inline
void TableDrawer<RowType>::setBody(std::vector<RowType *> *body) {
    this->body = body;
}

#endif //COURSE_WORK_TABLE_DRAWER_H
