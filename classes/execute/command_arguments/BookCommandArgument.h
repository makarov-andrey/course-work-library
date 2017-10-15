#ifndef COURSE_WORK_BOOKIDCOMMANDARGUMNET_H
#define COURSE_WORK_BOOKIDCOMMANDARGUMNET_H


#include "../base/CommandArgument.h"
#include "../../models/Book.h"

class BookCommandArgument : public CommandArgument {
public:
    BookCommandArgument();
    Book *getBook();
    int getBookPosition();
};


#endif //COURSE_WORK_BOOKIDCOMMANDARGUMNET_H
