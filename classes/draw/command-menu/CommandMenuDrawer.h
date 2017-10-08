#ifndef COURSE_WORK_COMMANDMENUDRAWER_H
#define COURSE_WORK_COMMANDMENUDRAWER_H


#include "../Drawable.h"
#include "../../execute/base/Command.h"

class CommandMenuDrawer /*: public Drawable*/ {
public:
    int commandColor;
    int argumentColor;
    int descriptionColor;
    std::vector<Command*> *commands;

    CommandMenuDrawer();
    void render();
    void renderCommand(Command *command);
    void renderArgument(CommandArgument *argument);
};


#endif //COURSE_WORK_COMMANDMENUDRAWER_H
