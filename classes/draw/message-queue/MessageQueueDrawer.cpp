#include <iostream>
#include "MessageQueueDrawer.h"
#include "../../../functions/functions.h"
#include "../../CommandLineInterface.h"

void MessageQueueDrawer::render() {
    while (!messages->empty()) {
        auto message = messages->front();
        CommandLineInterface::setColor(message->charColor, message->backgroundColor);
        std::cout << " " << message->text << " " << std::endl;
        CommandLineInterface::setColor();
        messages->pop();
        delete message;
    }
    std::cout << std::endl;
}

void MessageQueueDrawer::setMessages(std::queue<Message *> *messages) {
    this->messages = messages;
}
