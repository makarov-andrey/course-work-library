#ifndef COURSE_WORK_ADDBOOKCOMMAND_H
#define COURSE_WORK_ADDBOOKCOMMAND_H


#include "../base/Command.h"

class AddBookCommand : public Command {
public:
    AddBookCommand();
    void execute();
};


#endif //COURSE_WORK_ADDBOOKCOMMAND_H
