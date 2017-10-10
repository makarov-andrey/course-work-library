#ifndef COURSE_WORK_DELETEBOOKCOMMAND_H
#define COURSE_WORK_DELETEBOOKCOMMAND_H


#include "../base/Command.h"
#include "../command_arguments/BookCommandArgument.h"

class DeleteBookCommand : public Command {
protected:
    BookCommandArgument *bookArgument;
public:
    DeleteBookCommand();
    void execute();
};


#endif //COURSE_WORK_DELETEBOOKCOMMAND_H
