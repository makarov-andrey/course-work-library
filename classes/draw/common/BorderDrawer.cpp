#include <iostream>
#include "BorderDrawer.h"
#include "../../../functions/functions.h"

BorderDrawer::BorderDrawer() {
    borderColor = DEFAULT_CHAR_COLOR;
}

void BorderDrawer::renderHorizontalBorderLine() {
    setColor(this->borderColor);
    std::cout << std::string(getBorderWidth(), '-') << std::endl;
    setColor();
}

void BorderDrawer::renderVerticalBorderSymbol() {
    setColor(this->borderColor);
    std::cout << '|';
    setColor();
}
