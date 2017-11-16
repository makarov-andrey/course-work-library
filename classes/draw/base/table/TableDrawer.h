#ifndef COURSE_WORK_TABLE_DRAWER_H
#define COURSE_WORK_TABLE_DRAWER_H

#include "../../Drawable.h"
#include "../cell/CellDrawer.h"
#include "../../../models/Book.h"
#include "../../../../colors.h"
#include "../../../../functions/functions.h"
#include "../cell/IndexCellDrawer.h"
#include "../../common/BorderDrawer.h"
#include "../../../CommandLineInterface.h"

template<typename RowType>
class TableDrawer :
        public Drawable,
        public BorderDrawer {
public:
    typedef CellDrawer<RowType> TypedCellDrawer;

    int headingColor;
    int cellColor;

    TableDrawer() {
        cellDrawers = new std::vector<TypedCellDrawer *>;

        auto *indexCellDrawer = new IndexCellDrawer<RowType>;
        indexCellDrawer->tableDrawer = this;
        cellDrawers->push_back(indexCellDrawer);

        headingColor = COLOR_LIGHT_GREEN;
        cellColor = DEFAULT_CHAR_COLOR;
    }

    void recountCellSizes() {
        for (auto &cellDrawer: *cellDrawers) {
            cellDrawer->recountSize(body);
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

    int getIndexOfElement (RowType *row) {
        typename std::vector<RowType*>::iterator rowIterator = std::find(body->begin(), body->end(), row);
        return std::distance<>(body->begin(), rowIterator);
    }

protected:
    std::vector<TypedCellDrawer *> *cellDrawers;
    std::vector<RowType *> *body;

    void renderHeading() {
        renderHorizontalBorderLine();
        renderVerticalBorderSymbol();
        for (auto &cellDrawer: *cellDrawers) {
            CommandLineInterface::setColor(headingColor);
            cellDrawer->renderHeading();
            CommandLineInterface::setColor();
            renderVerticalBorderSymbol();
        }
        std::cout << std::endl;
        renderHorizontalBorderLine();
    }

    void renderRow(RowType *row) {
        renderVerticalBorderSymbol();
        for (auto &cellDrawer: *cellDrawers) {
            CommandLineInterface::setColor(cellColor);
            cellDrawer->row = row;
            cellDrawer->render();
            CommandLineInterface::setColor();
            renderVerticalBorderSymbol();
        }
        std::cout << std::endl;
        renderHorizontalBorderLine();
    }

    int getBorderWidth() {
        int size = 1;
        for (auto &cellDrawer: *cellDrawers) {
            size += cellDrawer->size;
            size++;
        }
        return size;
    }
};

#endif //COURSE_WORK_TABLE_DRAWER_H
