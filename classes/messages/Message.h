#ifndef COURSE_WORK_MESSAGEDRAWER_H
#define COURSE_WORK_MESSAGEDRAWER_H

#include <string>
#include "../draw/Drawable.h"
#include "../draw/common/BorderDrawer.h"
#include "../../colors.h"

class Message {
public:
    int charColor;
    int backgroundColor;
    std::string text;
    Message();
    Message(std::string text, int charColor, int backgroundColor);
};


#endif //COURSE_WORK_MESSAGEDRAWER_H
