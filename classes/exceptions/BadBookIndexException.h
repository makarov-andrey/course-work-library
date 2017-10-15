#ifndef COURSE_WORK_BADBOOKINDEXEXCEPTION_H
#define COURSE_WORK_BADBOOKINDEXEXCEPTION_H


#include "BadInputException.h"

class BadBookIndexException : public BadInputException {
public:
    virtual char const* what() const throw();
};


#endif //COURSE_WORK_BADBOOKINDEXEXCEPTION_H
