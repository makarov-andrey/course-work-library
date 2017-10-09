#ifndef COURSE_WORK_SAVEBOOKCOMMAND_H
#define COURSE_WORK_SAVEBOOKCOMMAND_H

#include "../command_arguments/FileCommandArgument.h"
#include "../base/Command.h"

class SaveToFileCommand : public Command {
protected:
    FileCommandArgument *fileArgument;
public:
    SaveToFileCommand();
    void execute();
};


#endif //COURSE_WORK_SAVEBOOKCOMMAND_H
