#ifndef COURSE_WORK_FIELDCOMMANDARGUMENT_H
#define COURSE_WORK_FIELDCOMMANDARGUMENT_H


#include "../base/CommandArgument.h"
#include "../../models/Book.h"

class FieldCommandArgument : public CommandArgument {
public:
    FieldCommandArgument();
    Book::field toBookEnumField();
};


#endif //COURSE_WORK_FIELDCOMMANDARGUMENT_H
