#ifndef COURSE_WORK_COMMANDMENUDRAWER_H
#define COURSE_WORK_COMMANDMENUDRAWER_H


#include "../Drawable.h"
#include "../../execute/base/Command.h"

class CommandMenuDrawer /*: public Drawable*/ {
protected:
    std::vector<Command*> *commands;

public:
    int commandColor;
    int argumentColor;
    int descriptionColor;

    CommandMenuDrawer();
    void render();
    void renderCommand(Command *command);
    void renderArgument(CommandArgument *argument);
    void setCommands(std::vector<Command*> *commands);
    std::vector<Command*> *getCommands();
};


#endif //COURSE_WORK_COMMANDMENUDRAWER_H
