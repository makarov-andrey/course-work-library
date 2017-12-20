#ifndef COURSE_WORK_BADBOOKFIELDEXCEPTION_H
#define COURSE_WORK_BADBOOKFIELDEXCEPTION_H


#include "InvalidArgumentException.h"

class BadBookFieldException : public InvalidArgumentException {
public:
    virtual char const* what() const throw();
};


#endif //COURSE_WORK_BADBOOKFIELDEXCEPTION_H
