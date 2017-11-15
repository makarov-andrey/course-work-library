#include <queue>
#include "classes/models/Library.h"
#include "classes/messages/Message.h"

Library *globalLibrary;
std::queue<Message*> *globalMessages = new std::queue<Message*>;