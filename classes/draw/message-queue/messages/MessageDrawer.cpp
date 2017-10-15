#include <iostream>
#include <utility>
#include "MessageDrawer.h"
#include "../../../../functions/functions.h"

MessageDrawer::MessageDrawer() {
    this->charColor = DEFAULT_BACKGROUND_COLOR;
}

MessageDrawer::MessageDrawer(std::string text, int charColor, int backgroundColor) {
    this->text = text;
    this->charColor = charColor;
    this->backgroundColor = backgroundColor;
}

void MessageDrawer::render() {
    setColor(charColor, backgroundColor);
    std::cout << " " << text << " " << std::endl;
    setColor();
}
