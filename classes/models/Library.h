#ifndef COURSE_WORK_LIBRARY_H
#define COURSE_WORK_LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"

class Library {
public:
    Library();
    std::string name;
    std::string owner;
    std::vector<Book*> *books;
};


#endif //COURSE_WORK_LIBRARY_H
