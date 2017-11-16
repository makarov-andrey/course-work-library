#include <iostream>
#include "BorderDrawer.h"
#include "../../../functions/functions.h"
#include "../../CommandLineInterface.h"

BorderDrawer::BorderDrawer() {
    borderColor = DEFAULT_CHAR_COLOR;
}

void BorderDrawer::renderHorizontalBorderLine() {
    CommandLineInterface::setColor(this->borderColor);
    std::cout << std::string(getBorderWidth(), '-') << std::endl;
    CommandLineInterface::setColor();
}

void BorderDrawer::renderVerticalBorderSymbol() {
    CommandLineInterface::setColor(this->borderColor);
    std::cout << '|';
    CommandLineInterface::setColor();
}
