#include <iostream>
#include "TableDrawer.h"
#include "../../../../headers/colors.h"
#include "../../../../functions/functions.h"

template<typename RowType>
TableDrawer<RowType>::TableDrawer() {
    headingColor = COLOR_GREEN;
    borderColor = COLOR_WHITE;
    cellColor = COLOR_WHITE;
}

template<typename RowType>
void TableDrawer<RowType>::renderHorizontalBorderLine() {
    setColor(borderColor);
    std::cout << std::string(getTableWidth(), '-') << std::endl;
    setColor();
};

template<typename RowType>
void TableDrawer<RowType>::renderVerticalBorderSymbol() {
    setColor(borderColor);
    std::cout << '|';
    setColor();
}

template<typename RowType>
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
int TableDrawer<RowType>::getTableWidth() {
    int size = 1;
    for (TypedCellDrawerIterator column = cellDrawers.begin() ; column != cellDrawers.end(); ++column) {
        size += column->size;
        size++;
    }
    return size;
};

template<typename RowType>
void TableDrawer<RowType>::render() {
    renderHeading();
    for (RowTypeIterator row = body.begin(); body != body.end(); ++row) {
        renderRow(row.base());
    }
}

template<typename RowType>
void TableDrawer<RowType>::recountCellSizes() {
    for (TypedCellDrawerIterator cell = cellDrawers.begin() ; cell != cellDrawers.end(); ++cell) {
        cell->size = cell->heading.size();
    }
    for (RowTypeIterator row = body.begin() ; body != body.end(); ++row) {
        for (TypedCellDrawerIterator cell = cellDrawers.begin() ; cell != cellDrawers.end(); ++cell) {
            cell->row = row.base();
            cell->size = std::max(cell->size, cell->getValue().size());
        }
    }
}
