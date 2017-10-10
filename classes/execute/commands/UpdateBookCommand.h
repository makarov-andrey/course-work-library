#ifndef COURSE_WORK_UPDATEBOOKCOMMAND_H
#define COURSE_WORK_UPDATEBOOKCOMMAND_H

#include "../base/Command.h"
#include "../command_arguments/BookCommandArgument.h"

class UpdateBookCommand : public Command {
protected:
    BookCommandArgument *bookArgument;
public:
    UpdateBookCommand();
    void execute();
};


#endif //COURSE_WORK_UPDATEBOOKCOMMAND_H
