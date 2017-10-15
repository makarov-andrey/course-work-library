#ifndef COURSE_WORK_ERRORMESSAGEDRAWER_H
#define COURSE_WORK_ERRORMESSAGEDRAWER_H


#include "MessageDrawer.h"
#include "../../../../colors.h"
#include <utility>

class ErrorMessageDrawer : public MessageDrawer {
public:
    explicit ErrorMessageDrawer(std::string text) : MessageDrawer(text, COLOR_WHITE, COLOR_LIGHT_RED) {}
};


#endif //COURSE_WORK_ERRORMESSAGEDRAWER_H
