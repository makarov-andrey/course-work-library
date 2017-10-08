#ifndef COURSE_WORK_FIELDCOMMANDARGUMENT_H
#define COURSE_WORK_FIELDCOMMANDARGUMENT_H


#include "../base/CommandArgument.h"

class FieldCommandArgument : public CommandArgument {
protected:
    std::string regexString;

public:
    FieldCommandArgument();
};


#endif //COURSE_WORK_FIELDCOMMANDARGUMENT_H
