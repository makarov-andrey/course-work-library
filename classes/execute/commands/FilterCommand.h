#ifndef COURSE_WORK_FILTERCOMMAND_H
#define COURSE_WORK_FILTERCOMMAND_H


#include "../base/Command.h"
#include "../command_arguments/FieldCommandArgument.h"
#include "../command_arguments/CompareOperatorCommandArgument.h"
#include "../command_arguments/ValueCommandArgument.h"

class FilterCommand : public Command {
protected:
    FieldCommandArgument *fieldArgument;
    CompareOperatorCommandArgument *compareOperatorArgument;
    ValueCommandArgument *valueArgument;
public:
    FilterCommand();
    void execute();
};


#endif //COURSE_WORK_FILTERCOMMAND_H
