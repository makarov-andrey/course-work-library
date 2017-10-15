#include <queue>
#include "classes/models/Library.h"
#include "classes/draw/message-queue/messages/MessageDrawer.h"

Library *globalLibrary;
std::queue<MessageDrawer*> *globalMessages = new std::queue<MessageDrawer*>;