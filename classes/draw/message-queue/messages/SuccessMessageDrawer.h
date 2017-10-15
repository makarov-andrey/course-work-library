#ifndef COURSE_WORK_SUCCESSMESSAGEDRAWER_H
#define COURSE_WORK_SUCCESSMESSAGEDRAWER_H


#include "MessageDrawer.h"
#include "../../../../colors.h"

class SuccessMessageDrawer : public MessageDrawer {
public:
    explicit SuccessMessageDrawer(std::string text) : MessageDrawer(text, COLOR_BLACK, COLOR_LIGHT_GREEN) { }
};


#endif //COURSE_WORK_SUCCESSMESSAGEDRAWER_H
