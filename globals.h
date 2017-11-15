#ifndef COURSE_WORK_GLOBALS_H
#define COURSE_WORK_GLOBALS_H

#include <queue>
#include "classes/models/Library.h"
#include "classes/messages/Message.h"

extern Library *globalLibrary;
extern std::queue<Message*> *globalMessages;

#endif //COURSE_WORK_GLOBALS_H
