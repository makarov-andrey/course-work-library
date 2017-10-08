#ifndef COURSE_WORK_SAVEBOOKCOMMAND_H
#define COURSE_WORK_SAVEBOOKCOMMAND_H


#include "../base/Command.h"

class SaveToFileCommand : public Command {
public:
    SaveToFileCommand();
    void execute();
};


#endif //COURSE_WORK_SAVEBOOKCOMMAND_H
