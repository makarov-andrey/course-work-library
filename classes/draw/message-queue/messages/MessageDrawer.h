#ifndef COURSE_WORK_MESSAGEDRAWER_H
#define COURSE_WORK_MESSAGEDRAWER_H

#include <string>
#include "../../Drawable.h"
#include "../../common/BorderDrawer.h"
#include "../../../../colors.h"

class MessageDrawer : public Drawable {
public:
    int charColor;
    int backgroundColor;
    std::string text;
    MessageDrawer();
    MessageDrawer(std::string text, int charColor, int backgroundColor);
    void render();
};


#endif //COURSE_WORK_MESSAGEDRAWER_H
