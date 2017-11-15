#ifndef COURSE_WORK_ERRORMESSAGEDRAWER_H
#define COURSE_WORK_ERRORMESSAGEDRAWER_H


#include "Message.h"
#include "../../colors.h"
#include <utility>

class ErrorMessage : public Message {
public:
    explicit ErrorMessage(std::string text) : Message(text, COLOR_WHITE, COLOR_LIGHT_RED) {}
};


#endif //COURSE_WORK_ERRORMESSAGEDRAWER_H
