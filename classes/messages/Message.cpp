#include <iostream>
#include <utility>
#include "Message.h"
#include "../../functions/functions.h"

Message::Message() {
    this->charColor = DEFAULT_BACKGROUND_COLOR;
}

Message::Message(std::string text, int charColor, int backgroundColor) {
    this->text = text;
    this->charColor = charColor;
    this->backgroundColor = backgroundColor;
}
