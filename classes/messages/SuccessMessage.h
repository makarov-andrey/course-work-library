#ifndef COURSE_WORK_SUCCESSMESSAGEDRAWER_H
#define COURSE_WORK_SUCCESSMESSAGEDRAWER_H


#include "Message.h"
#include "../../colors.h"

class SuccessMessage : public Message {
public:
    explicit SuccessMessage(std::string text) : Message(text, COLOR_BLACK, COLOR_LIGHT_GREEN) { }
};


#endif //COURSE_WORK_SUCCESSMESSAGEDRAWER_H
