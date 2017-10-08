#ifndef COURSE_WORK_FILENAMECOMMANDARGUMENT_H
#define COURSE_WORK_FILENAMECOMMANDARGUMENT_H


#include "../base/CommandArgument.h"

class FileCommandArgument : public CommandArgument {
protected:
    std::string regexString;

public:
    FileCommandArgument();
};


#endif //COURSE_WORK_FILENAMECOMMANDARGUMENT_H
