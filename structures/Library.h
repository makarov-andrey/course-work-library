#ifndef COURSE_WORK_LIBRARY_H
#define COURSE_WORK_LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"

typedef struct {
public:
    std::string name;
    std::string owner;
    std::vector<Book> books;
} Library;


#endif //COURSE_WORK_LIBRARY_H
