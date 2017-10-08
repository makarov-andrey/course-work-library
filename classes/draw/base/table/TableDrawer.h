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

    TableDrawer() {
        cellDrawers = new std::vector<TypedCellDrawer *>;
        headingColor = COLOR_LIGHT_GREEN;
        borderColor = DEFAULT_CHAR_COLOR;
        cellColor = DEFAULT_CHAR_COLOR;
    }

    void recountCellSizes() {
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

    void render() {
        renderHeading();
        for (auto &row: *body) {
            renderRow(row);
        }
    }

    void setBody(std::vector<RowType *> *body) {
        this->body = body;
    }

protected:
    std::vector<TypedCellDrawer *> *cellDrawers;
    std::vector<RowType *> *body;

    void renderHeading() {
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

    void renderRow(RowType *row) {
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

    void renderHorizontalBorderLine() {
        setColor(borderColor);
        std::cout << std::string(getTableWidth(), '-') << std::endl;
        setColor();
    }

    void renderVerticalBorderSymbol() {
        setColor(borderColor);
        std::cout << '|';
        setColor();
    }

    int getTableWidth() {
        int size = 1;
        for (auto &cellDrawer: *cellDrawers) {
            size += cellDrawer->size;
            size++;
        }
        return size;
    }
};

#endif //COURSE_WORK_TABLE_DRAWER_H
