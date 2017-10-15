#ifndef COURSE_WORK_BADCOMMANDEXCEPTION_H
#define COURSE_WORK_BADCOMMANDEXCEPTION_H

#include "BadInputException.h"

class BadCommandException : public BadInputException {
public:
    virtual char const* what() const throw();
};

#endif //COURSE_WORK_BADCOMMANDEXCEPTION_H
