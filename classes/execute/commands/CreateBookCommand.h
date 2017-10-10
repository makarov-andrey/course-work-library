#ifndef COURSE_WORK_ADDBOOKCOMMAND_H
#define COURSE_WORK_ADDBOOKCOMMAND_H


#include "../base/Command.h"

class CreateBookCommand : public Command {
public:
    CreateBookCommand();
    void execute();
};


#endif //COURSE_WORK_ADDBOOKCOMMAND_H
