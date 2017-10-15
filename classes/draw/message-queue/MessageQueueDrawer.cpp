#include <iostream>
#include "MessageQueueDrawer.h"

void MessageQueueDrawer::render() {
    while (!messages->empty()) {
        messages->front()->render();
        messages->pop();
    }
    std::cout << std::endl;
}

void MessageQueueDrawer::setMessages(std::queue<MessageDrawer *> *messages) {
    this->messages = messages;
}
