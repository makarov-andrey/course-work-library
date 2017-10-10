#ifndef COURSE_WORK_DELETEBOOKCOMMAND_H
#define COURSE_WORK_DELETEBOOKCOMMAND_H


#include "../base/Command.h"
#include "../command_arguments/BookIdCommandArgument.h"

class DeleteBookCommand : public Command {
protected:
    BookIdCommandArgument *bookIdArgument;
public:
    DeleteBookCommand();
    void execute();
};


#endif //COURSE_WORK_DELETEBOOKCOMMAND_H
