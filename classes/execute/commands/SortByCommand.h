#ifndef COURSE_WORK_SORTBYCOMMAND_H
#define COURSE_WORK_SORTBYCOMMAND_H


#include "../command_arguments/FieldCommandArgument.h"
#include "../base/Command.h"
#include "../command_arguments/SortDirectionCommandArgument.h"

class SortByCommand : public Command {
protected:
    FieldCommandArgument *fieldArgument;
    SortDirectionCommandArgument *sortDirectionArgument;
public:
    SortByCommand();
    void execute();
};


#endif //COURSE_WORK_SORTBYCOMMAND_H
