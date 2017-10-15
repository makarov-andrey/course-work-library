#ifndef COURSE_WORK_GLOBALS_H
#define COURSE_WORK_GLOBALS_H

#include <queue>
#include "classes/models/Library.h"
#include "classes/draw/message-queue/messages/MessageDrawer.h"

extern Library *globalLibrary;
extern std::queue<MessageDrawer*> *globalMessages;

#endif //COURSE_WORK_GLOBALS_H
